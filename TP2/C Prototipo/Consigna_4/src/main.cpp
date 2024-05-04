#include <Arduino.h>

const int LED_PIN(5);
const int POT_PIN (34);

void setup () {
    pinMode(LED_PIN, OUTPUT);
    pinMode(POT_PIN,INPUT);
}

void loop() {
    int potValue=analogRead(POT_PIN);
    int pmwValue = map(potValue, 0, 1023, 0, 255);

    analogWrite(LED_PIN, pmwValue);
    delay(100);
}