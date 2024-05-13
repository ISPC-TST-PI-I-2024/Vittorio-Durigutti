#include <Arduino.h>

#define led1 14
#define led2 13
#define rele 21

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(rele,OUTPUT);
}

void loop() {
  if (Serial.available()){
    String command = Serial.readString();
    command.trim (); 

    if (command == "ON led 1" ){ 
      digitalWrite(led1, HIGH);
      digitalWrite(rele, HIGH);

      Serial.println("led y rele encendidos");
    }
    else if (command == "ON led 2"){
      digitalWrite(led2, HIGH);
      digitalWrite(rele, HIGH);
    }
    else if (command == "OFF"){
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(rele, LOW);

      Serial.println("led y rele apagados");
    }
    else{
      Serial.println("Comando desonocido");
    }
  }
  delay(10);
}
