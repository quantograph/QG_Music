#include <QG_Devices.h>
#include <QG_Music.h>

TouchScreen _screen = TouchScreen();
AudioSettings _settings{};
AudioBoard _audio = AudioBoard();

// the setup function runs once when you press reset or power the board
void setup() {
    _screen.init();
    _screen._screen.setTextColor(ILI9341_WHITE);
    _screen._screen.setTextSize(2);

    _audio.init(&_settings);
    _audio.setInput(Inputs::mic);
}

// the loop function runs over and over again until power down or reset
void loop() {
    _audio.process();
    _audio.noteFrequency();

    delay(100);
}
