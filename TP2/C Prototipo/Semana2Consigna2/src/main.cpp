#include <Arduino.h>

#define BETA 3950

void setup() {
  Serial.begin(9600);
}

void loop() {
  int temperatura = analogRead(A0);
  if (temperatura != 0 && temperatura != 1023) {
    float celsius = 1/(log(1/(1023.0/temperatura - 1))/BETA + 1.0/298.15)-273.15;
    Serial.print("la temperatura leida por el sensor es: ");
    Serial.println(celsius);
  } else {
    Serial.println("Error: lectura del sensor fuera de rango");
  }
  delay(1000); 
}
