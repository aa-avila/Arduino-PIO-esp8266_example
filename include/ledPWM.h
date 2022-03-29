#ifndef ledPWM_h
#define ledPWM_h

#include <Arduino.h>

class ledPWM {
   public:
    ledPWM(byte pin);
    void on();
    void off();
    void toggle();
    bool getState();
    void setValue(int value);
    int getValue();
    void update();

   private:
    byte _pin;
    int _pwmValue;
    bool _state;
};

#endif