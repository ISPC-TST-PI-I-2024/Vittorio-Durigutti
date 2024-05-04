#include <Arduino.h>

#define LED_PIN1 15
#define LED_PIN2 2
#define LED_PIN3 0

void setup() {
 pinMode(LED_PIN1, OUTPUT);
 pinMode(LED_PIN2, OUTPUT);
 pinMode(LED_PIN3, OUTPUT);
}

void loop() {
digitalWrite(LED_PIN1, HIGH);
delay(1000);
digitalWrite(LED_PIN1, LOW);

digitalWrite(LED_PIN2, HIGH);
delay(1000);
digitalWrite(LED_PIN2, LOW);

digitalWrite(LED_PIN3, HIGH);
delay(1000);
digitalWrite(LED_PIN3, LOW);
}