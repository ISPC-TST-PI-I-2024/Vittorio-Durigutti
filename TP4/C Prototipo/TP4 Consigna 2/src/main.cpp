#include <Arduino.h>

#define led1 14
#define led2 13
#define potenc 34

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(115200); 
}

void loop() {
  int ValorPotenc = analogRead(potenc);
  Serial.println(ValorPotenc);

  if(ValorPotenc > 2048){
    digitalWrite (led1, HIGH);
    digitalWrite(led2, HIGH);
  }
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
  delay(100); 
}
