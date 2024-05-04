#include <Arduino.h>

void setup() {
  pinMode(15, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  int pulsador=digitalRead(2);
  if (pulsador == HIGH){
    digitalWrite(15, HIGH);
  }
  else{
    digitalWrite(15, LOW);
  }
  delay(10); 
}
