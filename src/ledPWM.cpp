#include "ledPWM.h"

#include <Arduino.h>

ledPWM::ledPWM(byte pin) {
    _pin = pin;
    _pwmValue = 0;
    _state = false;
}

void ledPWM::init() {
    pinMode(_pin, OUTPUT);
    analogWrite(_pin, _pwmValue);
}

void ledPWM::on() {
    _state = true;
}

void ledPWM::off() {
    _state = false;
}

void ledPWM::toggle() {
    _state = !_state;
}

bool ledPWM::getState() {
    return _state;
}

void ledPWM::setValue(int value) {
    _pwmValue = value;
}

int ledPWM::getValue() {
    return _pwmValue;
}

void ledPWM::update() {
    if (_state) {
        analogWrite(_pin, _pwmValue);
    } else {
        analogWrite(_pin, 0);
    }
}