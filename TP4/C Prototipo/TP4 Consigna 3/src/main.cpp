#include <Arduino.h>
#include "DHTesp.h"

const int sensor = 15;
DHTesp dhtSensor;

void setup() {
  Serial.begin(115200);
  dhtSensor.setup(sensor, DHTesp::DHT22);
}

void loop() {
  TempAndHumidity  data = dhtSensor.getTempAndHumidity();
  Serial.println("Temp: " + String(data.temperature, 2) + "°C");
  Serial.println("Humidity: " + String(data.humidity, 1) + "%");
  delay(2000); 
}