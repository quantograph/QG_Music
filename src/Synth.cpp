#include "MusicDef.h"
#include "Misc.h"
#include "Effects.h"
#include "Synth.h"

//=================================================================================================
Synth::Synth() {
    for(int i = 0; i < MAX_MIXERS; ++i) {
        _cords[i] = nullptr;
    }
}

//=================================================================================================
Synth::~Synth() {
    reset();
}

//=================================================================================================
void Synth::reset() {
    //Serial.printf("Synth::reset\n");

    // Delete all voices
    for(auto voice : _synthVoices) {
        delete voice;
    }
    _synthVoices.clear();

    // Delete all mixer connections
    for(int i = 0; i < MAX_MIXERS; ++i) {
        delete _cords[i];
        _cords[i] = nullptr;
    }

    // Delete all mixers
    for(auto mixer : _voiceMixers) {
        delete mixer;
    }
    _voiceMixers.clear();

    delete _outCord;
}

//=================================================================================================
bool Synth::init(Instrument instrument, AudioBoard* audioBoard) {
    Serial.printf("Synth::init ==================================\n");
    _audioBoard = audioBoard;

    // Load the sound sample for the selected instrument
    Serial.printf("1\n");
    if(!getInstrument(instrument, _audioBoard, _instrumentInfo)) {
        Serial.printf("##### ERROR: Can't load instrument %d\n", instrument);
        return false;
    }

    Serial.printf("Synch loaded instrument %d: %s (%d)\n", instrument, _instrumentInfo._name.c_str(), _instrumentInfo._instrument);

    // Synth has only 4 mixers with 4 channels each
    Serial.printf("2\n");
    if(_instrumentInfo._voices > 16) {
        Serial.printf("##### ERROR: Synth can't have more than 16 voices\n");
        return false;
    }

    // Make all voices
    AudioMixer4* voiceMixer{nullptr};
    for(int i = 0; i < _instrumentInfo._voices; ++i) {
        // Load the instrument
        SynthVoice* voice = new SynthVoice;
        voice->_sound.setInstrument(*_instrumentInfo._sample);
        voice->_sound.amplitude(1);
        _synthVoices.push_back(voice);

        // Connect the voice to it's mixer
        int channelIndex = i % 4;
        int mixerIndex = i / 4;
        if(channelIndex == 0) {
            voiceMixer = new AudioMixer4();
            voiceMixer->gain(0, 1.0f);
            voiceMixer->gain(1, 1.0f);
            voiceMixer->gain(2, 1.0f);
            voiceMixer->gain(3, 1.0f);
            Serial.printf("New mixer %d\n", mixerIndex);
        }

        voice->_cord = new AudioConnection(voice->_sound, 0, *voiceMixer, channelIndex);
        Serial.printf("Synth voice %d, mixer %d, channel %d, voices=%d\n", i, mixerIndex, channelIndex, _synthVoices.size());

        // Connect this mixer to the synth output mixer
        AudioConnection* mixerCord{_cords[mixerIndex]};
        if(!mixerCord) {
            Serial.printf("--- New cable\n");
            mixerCord = new AudioConnection(*voiceMixer, 0, _outMixer, mixerIndex);
            _cords[mixerIndex] = mixerCord;
        }

        voice->_mixer = voiceMixer;
    }

    // Make effects
    /*Serial.printf("3\n");
    delay(100);
    _effect1 = new Effects(&_settings->_synthInput._effect1, &_outMixer, 0, &_settings->_audioBoard->_mixer1, 1);
    Serial.printf("4\n");
    delay(100);
    _effect1->init();
    Serial.printf("5\n");
    delay(100);
    _effect2 = new Effects(&_settings->_synthInput._effect2, &_outMixer, 0, &_settings->_audioBoard->_mixer4, 1);
    Serial.printf("6\n");
    delay(100);
    _effect2->init();
    Serial.printf("7\n");
    delay(100);
    updateEffects();*/

    Serial.printf("========================== Synth::init end \n");
    return true;
}

//=================================================================================================
bool Synth::updateEffects() {
    /*Serial.printf("----- Synth::updateEffects: Effect1: %s (%d). Effect2: %s (%d)\n", 
                  _settings->_synthInput._effect1._effectName.c_str(), 
                  _settings->_synthInput._effect1._effectType,
                  _settings->_synthInput._effect2._effectName.c_str(), 
                  _settings->_synthInput._effect2._effectType);

    _effect1->update();
    _effect2->update();*/

    return true;
}

//=================================================================================================
bool Synth::setInstrument(Instrument instrument) {
    // Load the sound sample for the selected instrument
    if(!getInstrument(instrument, _audioBoard, _instrumentInfo)) {
        Serial.printf("##### ERROR: Can't load instrument %d\n", instrument);
        return false;
    } else {
        Serial.printf("Synth::setInstrument: %s\n", _instrumentInfo._name.c_str());
    }

    for(auto voice : _synthVoices) {
        voice->_sound.setInstrument(*_instrumentInfo._sample);
    }

    return true;
}

//=================================================================================================
void Synth::noteOn(byte note, byte velocity) {
    SynthVoice* voice{nullptr};
    SynthVoice* oldestVoice{nullptr};
    uint32_t minTime{0};
    Serial.printf("Synth::noteOn: %d, %d\n", note, velocity);

    // Find a voice to use for this note
    for(int i = 0; i < _instrumentInfo._voices; ++i) {
        voice = _synthVoices[i];
        if(voice->_note == 0) // Found a free voice
            break;

        // Find the oldest sounding voice
        if(minTime == 0 || voice->_startTime < minTime) {
            oldestVoice = voice;
            minTime = voice->_startTime;
        }
    }

    // If no free voice was found, stop the oldest sounding voice and reuse it
    if(voice == nullptr) {
        voice = oldestVoice;
        voice->_sound.stop();
    }

    int volume = _volume * 127;
    //Serial.printf("volume=%d\n", volume);
    voice->_sound.playNote(note, volume); // 0 - 127
    voice->_note = note;
    voice->_startTime = millis();
}

//=================================================================================================
void Synth::noteOff(byte note) {
    SynthVoice* voice{nullptr};
    //Serial.printf("Synth::noteOff: %d\n", note);

    // Find the voice for the note to stop
    for(int i = 0; i < _instrumentInfo._voices; ++i) {
        voice = _synthVoices[i];
        if(voice->_note == note)
            break;
    }

    // Stop the note
    voice->_sound.stop();
    voice->_note = 0;
    voice->_startTime = 0;
}

//=================================================================================================
void Synth::controlChange(byte channel, byte control, byte value) {
    //Serial.printf("Control Change, ch=%d, control=%d, val=%d\n", channel, control, value);

    switch(control) {
        case 7: // Volume
            _volume = (float)value / 127;
            break;

        default:
            break;
    }
}
