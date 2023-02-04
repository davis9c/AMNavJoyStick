#include "AMNavJoyStick.h"

#include "Arduino.h"

AMNavJoyStick::AMNavJoyStick(int pinX, int pinY, int pinSW) {
    pinMode(pinX, INPUT);
    pinMode(pinY, INPUT);
    pinMode(pinSW, INPUT_PULLUP);
    _pinX = pinX;
    _pinY = pinY;
    _pinSW = pinSW;
}
int AMNavJoyStick::readX() {
    return correctJoyStick(map(analogRead(_pinX), 0, 1023, -20, 20));
}
int AMNavJoyStick::readY() {
    return correctJoyStick(map(analogRead(_pinY), 0, 1023, -20, 20));
}
bool AMNavJoyStick::readSW() { return !digitalRead(_pinSW); }

int AMNavJoyStick::correctJoyStick(int val) {
    if (val < -2) {
        return map(val, -3, -18, -1, -5);
    } else if (val > 2) {
        return map(val, 3, 18, 1, 5);
    } else {
        return 0;
    }
}