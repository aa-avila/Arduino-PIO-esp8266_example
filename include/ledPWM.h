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
    void setValue(byte value);
    byte getValue();
    void update();

   private:
    byte _pin;
    byte _pwmValue;
    bool _state;
};

#endif