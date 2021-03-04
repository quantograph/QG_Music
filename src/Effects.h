#pragma once

#include "Misc.h"

// Sound effects
enum EffectType {
    eff_none,
    eff_clean,
    eff_chorus,
    eff_flange,
    eff_reverb,
    eff_freeverb,
    eff_envelope,
    eff_delay,
    eff_bitcrusher,
    eff_waveshaper,
    eff_granular,
    eff_last // Not an effect, for enumeration only. Insert new effects above this line.
};

//=================================================================================================
// Effect settings
struct Chorus {
    #define ChorusDelayMin 1
    #define ChorusDelayMax 64
    int _delay{16}; // Delay length, in AUDIO_BLOCK_SAMPLES, max 64
    #define ChorusVoicesMin 2
    #define ChorusVoicesMax 5
    int _voices{2}; // Number of voices

    void putValues(String& string, uint16_t parent, uint16_t parent2);

    void show(String title) const {
        Serial.printf("---------- %s Chorus\n", title.c_str());
        //delay(500);
        Serial.printf("delay=%d\n", _delay);
        //delay(500);
        Serial.printf("voices=%d\n", _voices);
        delay(500);
    }

    void random() {
        _delay = randomInt();
        _voices = randomInt();
    }

    bool operator != (const Chorus& r) {
        return _delay != r._delay ||
               _voices != r._voices;
    }
};

//=================================================================================================
struct Flange {
    int _delay{16}; // Delay length, in AUDIO_BLOCK_SAMPLES, max 64
    int _offset{16}; // how far back the flanged sample is from the original voice, in AUDIO_BLOCK_SAMPLES, max 64
    int _depth{16}; // modulation depth (larger values give a greater variation), in AUDIO_BLOCK_SAMPLES, max 64
    float _rate{0.5}; // modulation frequency, in Hertz.

    void putValues(String& string, uint16_t parent, uint16_t parent2);

    void show(String title) const {
        Serial.printf("---------- %s Flange\n", title.c_str());
        Serial.printf("delay=%d\n", _delay);
        Serial.printf("offset=%d\n", _offset);
        Serial.printf("depth=%d\n", _depth);
        Serial.printf("rate=%0.2f\n", _rate);
    }

    void random() {
        _delay = randomInt();
        _offset = randomInt();
        _depth = randomInt();
        _rate = randomFloat();
    }

    bool operator != (const Flange& r) {
        return _delay != r._delay ||
               _offset != r._offset ||
               _depth != r._depth ||
               _rate != r._rate;
    }
};

//=================================================================================================
struct Reverb {
    float _time{0.3};

    void putValues(String& string, uint16_t parent, uint16_t parent2);

    void show(String title) const {
        Serial.printf("---------- %s Reverb\n", title.c_str());
        Serial.printf("time=%0.2f\n", _time);
    }

    void random() {
        _time = randomFloat();
    }

    bool operator != (const Reverb& r) {
        return _time != r._time;
    }
};

//=================================================================================================
struct Freeverb {
    float _roomSize{0.7}; // 0.0 - 1.0
    float _damping{0.1}; // 0.0 - 1.0

    void putValues(String& string, uint16_t parent, uint16_t parent2);

    void show(String title) const {
        Serial.printf("---------- %s Freeverb\n", title.c_str());
        Serial.printf("roomSize=%0.2f\n", _roomSize);
        Serial.printf("damping=%0.2f\n", _damping);
    }

    void random() {
        _roomSize = randomFloat();
        _damping = randomFloat();
    }

    bool operator != (const Freeverb& r) {
        return _roomSize != r._roomSize ||
               _damping != r._damping;
    }
};

//=================================================================================================
struct Envelope {
    float _delay{0.0};
    float _attack{10.5}; // Max: 11880
    float _hold{2.5}; // Max: 11880
    float _decay{35}; // Max: 11880
    float _sustain{0.8}; // 0 to 1.0
    float _release{300}; // Max: 11880
    float _releaseNoteOn{5};

    void putValues(String& string, uint16_t parent, uint16_t parent2);

    void show(String title) const {
        Serial.printf("---------- %s Envelope\n", title.c_str());
        Serial.printf("delay=%0.2f\n", _delay);
        Serial.printf("attack=%0.2f\n", _attack);
        Serial.printf("hold=%0.2f\n", _hold);
        Serial.printf("decay=%0.2f\n", _decay);
        Serial.printf("sustain=%0.2f\n", _sustain);
        Serial.printf("release=%0.2f\n", _release);
        Serial.printf("releaseNoteOn=%0.2f\n", _releaseNoteOn);
    }

    void random() {
        _delay = randomFloat();
        _attack = randomFloat();
        _hold = randomFloat();
        _decay = randomFloat();
        _sustain = randomFloat();
        _release = randomFloat();
        _releaseNoteOn = randomFloat();
    }

    bool operator != (const Envelope& r) {
        return _delay != r._delay ||
               _attack != r._attack ||
               _hold != r._hold ||
               _decay != r._decay ||
               _sustain != r._sustain ||
               _release != r._release ||
               _releaseNoteOn != r._releaseNoteOn;
    }
};

//=================================================================================================
struct Delay {
    float _delays[8] = { -1, -1, -1, -1, -1, -1, -1, -1 };

    void putValues(String& string, uint16_t parent, uint16_t parent2);

    void show(String title) const {
        Serial.printf("---------- %s Delay \n", title.c_str());
        for(int i = 0; i < 8; ++i)
            Serial.printf("%d=%0.2f\n", i, _delays[i]);
    }

    void random() {
        for(int i = 0; i < 8; ++i)
            _delays[i] = randomFloat();
    }

    bool operator != (const Delay& r) {
        for(int i = 0; i < 8; ++i)
            if(_delays[i] != r._delays[i])
                return true;

        return false;
    }
};

//=================================================================================================
struct Bitcrusher {
    uint8_t _bits{1}; // 1 - 16 (16 - passthough)
    float _rate{}; // Hz, 1 - 44100Hz

    void putValues(String& string, uint16_t parent, uint16_t parent2);

    void show(String title) const {
        Serial.printf("---------- %s Bitcrusher\n", title.c_str());
        Serial.printf("bits=%0.2f\n", _bits);
        Serial.printf("rate=%0.2f\n", _rate);
    }

    void random() {
        _bits = randomInt();
        _rate = randomFloat();
    }

    bool operator != (const Bitcrusher& r) {
        return _bits != r._bits ||
               _rate != r._rate;
    }
};

//=================================================================================================
struct Waveshaper {
    float* _waveshape{};
    int _length{};

    void putValues(String& string, uint16_t parent, uint16_t parent2);

    void show(String title) const {
        Serial.printf("---------- %s Waveshaper\n", title.c_str());
    }

    void random() {
    }

    bool operator != (const Waveshaper& r) {
        return false;
            //_waveshape != r._waveshape ||
            //_length != r._length;
    }
};

//=================================================================================================
struct Granular {
    #define GRANULAR_MEMORY_SIZE 12800  // enough for 290 ms at 44.1 kHz
    float _ratio{1.0}; // 0.125 - 8.0
    float _freeze{100.0}; // milliseconds
    float _shift{200.0}; // milliseconds

    void putValues(String& string, uint16_t parent, uint16_t parent2);

    void show(String title) const {
        Serial.printf("---------- %s Granular\n", title.c_str());
        Serial.printf("ratio=%0.2f\n", _ratio);
        Serial.printf("freeze=%0.2f\n", _freeze);
        Serial.printf("shift=%0.2f\n", _shift);
    }

    void random() {
        _ratio = randomFloat();
        _freeze = randomFloat();
        _shift = randomFloat();
    }

    bool operator != (const Granular& r) {
        return _ratio != r._ratio ||
               _freeze != r._freeze ||
               _shift != r._shift;
    }
};

//=================================================================================================
// Settings for all possible effects for one instrument (synth or guitar)
struct EffectSettings {
    EffectType _effectType{EffectType::eff_clean};
    String _effectName{""};
    Chorus _chorus{};
    Flange _flange{};
    Reverb _reverb{};
    Freeverb _freeverb{};
    Envelope _envelope{};
    Delay _delay{};
    Bitcrusher _bitcrusher{};
    Waveshaper _waveshaper{};
    Granular _granular{};

    void putValues(String& string, uint16_t parent, uint16_t parent2);

    void show(String title) const {
        Serial.printf("---------- %s EffectSettings\n", title.c_str());
        Serial.printf("effectType=%d\n", _effectType);
        Serial.printf("effectName=%s\n", _effectName.c_str());
        _chorus.show(title);
        _flange.show(title);
        _reverb.show(title);
        _freeverb.show(title);
        _envelope.show(title);
        _delay.show(title);
        _bitcrusher.show(title);
        _waveshaper.show(title);
        _granular.show(title);
    }

    void random() {
        _effectType = (EffectType)randomInt();
        _effectName = randomString();
        _chorus.random();
        _flange.random();
        _reverb.random();
        _freeverb.random();
        _envelope.random();
        _delay.random();
        _bitcrusher.random();
        _waveshaper.random();
        _granular.random();
    }

    bool operator != (const EffectSettings& r) {
        return _effectType != r._effectType ||
               _effectName != r._effectName ||
               _chorus != r._chorus ||
               _flange != r._flange ||
               _reverb != r._reverb ||
               _freeverb != r._freeverb ||
               _envelope != r._envelope ||
               _delay != r._delay ||
               _bitcrusher != r._bitcrusher ||
               _waveshaper != r._waveshaper ||
               _granular != r._granular;
    }

    bool compare(const EffectSettings& r) {
        if(_effectType != r._effectType) {
            Serial.printf("##### ERROR, mismatch _effectType: %d %d\n", _effectType, r._effectType);
            return false;
        }

        if(_effectName != r._effectName) {
            Serial.printf("##### ERROR, mismatch _effectType: '%s' '%s'\n", 
                          _effectName.c_str(), r._effectName.c_str());
            return false;
        }

        if(_chorus != r._chorus) {
            Serial.printf("##### ERROR, _chorus mismatch:\n");
            _chorus.show("<--"), 
            r._chorus.show("-->");
            return false;
        }

        if(_flange != r._flange) {
            Serial.printf("##### ERROR, _flange mismatch:\n");
            _flange.show("<--"), 
            r._flange.show("-->");
            return false;
        }

        if(_reverb != r._reverb) {
            Serial.printf("##### ERROR, _reverb mismatch:\n");
            _reverb.show("<--"), 
            r._reverb.show("-->");
            return false;
        }

        if(_freeverb != r._freeverb) {
            Serial.printf("##### ERROR, _freeverb mismatch:\n");
            _freeverb.show("<--"), 
            r._freeverb.show("-->");
            return false;
        }

        if(_envelope != r._envelope) {
            Serial.printf("##### ERROR, _envelope mismatch:\n");
            _envelope.show("<--"), 
            r._envelope.show("-->");
            return false;
        }

        if(_delay != r._delay) {
            Serial.printf("##### ERROR, _delay mismatch:\n");
            _delay.show("<--"), 
            r._delay.show("-->");
            return false;
        }

        if(_bitcrusher != r._bitcrusher) {
            Serial.printf("##### ERROR, _bitcrusher mismatch:\n");
            _bitcrusher.show("<--"), 
            r._bitcrusher.show("-->");
            return false;
        }

        if(_waveshaper != r._waveshaper) {
            Serial.printf("##### ERROR, _waveshaper mismatch:\n");
            _waveshaper.show("<--"), 
            r._waveshaper.show("-->");
            return false;
        }

        if(_granular != r._granular) {
            Serial.printf("##### ERROR, _granular mismatch:\n");
            _granular.show("<--"), 
            r._granular.show("-->");
            return false;
        }

        return true;
    }
};

class Effects {
    struct Connection {
        AudioConnection* _in{nullptr};
        AudioConnection* _out{nullptr};
        bool _connected{false};
        String _name{};
        EffectType _type{EffectType::eff_none};

        Connection(const char* name, EffectType type) : 
            _name(name), _type(type) {
        }

        void connect() {
            if(_in)
                _in->connect();

            if(_out)
                _out->connect();

            _connected = true;
        }

        void disconnect() {
            if(_in)
                _in->disconnect();

            if(_out)
                _out->disconnect();

            _connected = false;
        }

        void show(const char* title) {
            Serial.printf("%s: connection '%s', conn=%s\n", title, _name.c_str(), _connected ? "Y" : "N");
        }
    };

    #define CHORUS_DELAY_LENGTH (16*AUDIO_BLOCK_SAMPLES)
    #define FLANGE_DELAY_LENGTH (6*AUDIO_BLOCK_SAMPLES)

    #define DELAY_LINE_LENGTH (64*AUDIO_BLOCK_SAMPLES)
    short _delayLine[DELAY_LINE_LENGTH];

public:
    Effects(EffectSettings* settings, AudioStream* source, uint8_t sourceOutput, 
            AudioStream* dest, uint8_t destInput);
    ~Effects();
    bool init();
    void makeConnection(EffectType type, AudioStream* effect);
    void disconnectAll();
    bool connect(EffectType type);
    void showConnections(const char* title, bool showAll = false);
    bool update();
    static std::vector<String> _effectName;

    EffectSettings* _settings{};
    AudioStream* _source{nullptr};
    uint8_t _sourceOutput{0};
    AudioStream* _dest{nullptr};
    uint8_t _destInput{0};
    int16_t* _granularMemory{nullptr};
    std::vector<Connection*> _connections{}; // All in/out connecions for all effects
    Connection* _currConnection{nullptr};
    // Effects
    AudioEffectChorus _chorus{};
    AudioEffectFlange _flange{};
    AudioEffectReverb _reverb{};
    AudioEffectFreeverb _freeverb{};
    AudioEffectEnvelope _envelope{};
    AudioEffectDelay _delay{};
    AudioEffectBitcrusher _bitcrusher{};
    AudioEffectWaveshaper _waveshaper{};
    AudioEffectGranular _granular{};
};
