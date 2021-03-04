#include <QG_Music.h>

ComposerSettings _composerSettings{};
Band _band{&_composerSettings};

//=================================================================================================
// Startup procedure, called before entering the "loop()" function
void setup() {
    _band.test();
}

//=================================================================================================
// The main loop. Called after "setup()" is done.
void loop() {

    delay(100);
}