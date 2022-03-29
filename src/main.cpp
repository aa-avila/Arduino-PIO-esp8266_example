#include <Arduino.h>

#include "ledPWM.h"

#define PWM_RANGE 256  // ESP8266 permite hasta 1024 (10bit)
#define LED1_PIN 4
ledPWM led1(LED1_PIN);

void setup() {
    analogWriteRange(PWM_RANGE);
    led1.init();
}

void loop() {
    led1.setValue(PWM_RANGE - 1);

    for (byte i = 0; i < 8; i++) {
        led1.toggle();
        led1.update();
        delay(500);
    }

    led1.on();

    for (int i = PWM_RANGE - 1; i > 0; i--) {
        led1.setValue(i);
        led1.update();
        delay(3);
    }

    for (int i = 0; i < PWM_RANGE - 1; i++) {
        led1.setValue(i);
        led1.update();
        delay(3);
    }
}