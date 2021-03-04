#pragma once

class Player {
#define MAX_DRUMS 128

private:
    NoteList _notes;
    NoteListIter _iter;
    uint32_t _startTime{};
    std::list<AudioConnection*> _cords; // Connections from all instruments to the output mixers
    Synth _rhythm;
    AudioSynthWavetable* _drums[MAX_DRUMS]; // Map of drum notes to their instruments
    void reset();
    bool setupDrums();
    void testDrums();
    Synth* _instruments[MAX_INSTRUMENT]; // Synthesizers for all instruments (Tracks)
    AudioBoard* audioBoard{};

public:
    Player();
    virtual ~Player();
    bool init(AudioBoard* audioBoard);
    bool play(Song* song);
    void process();
    void testMidiFile(SdCard* sdCard);
    bool playNote(Note* note);
};
