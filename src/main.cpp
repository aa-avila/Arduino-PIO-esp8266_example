#include <Arduino.h>

#include "ledPWM.h"

#define LED1_PIN 4

ledPWM led1(LED1_PIN);

void setup() {
}

void loop() {
    led1.setValue(1023);

    for (byte i = 0; i < 8; i++) {
        led1.toggle();
        led1.update();
        delay(500);
    }

    for (int i = 1023; i > 0; i--) {
        led1.setValue(i);
        led1.update();
        delay(2);
    }
}