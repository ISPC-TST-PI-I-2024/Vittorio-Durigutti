#include <Arduino.h>

#define btn1 34
#define btn2 39
#define btn3 36

#define sw1_1 13
#define sw1_2 12
#define sw1_3 14
#define sw1_4 27
#define sw1_5 26
#define sw1_6 25
#define sw1_7 33
#define sw1_8 32

#define led1 18
#define led2 5
#define led3 17
#define led4 16
#define led5 4
#define led6 0
#define led7 2
#define led8 15

// actividad 1
/*void setup() {
  pinMode(led1, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  delay(100);
}*/

// Actividad 2
/*void setup() {
  pinMode(led1, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
}*/

//Actividad 3
/*void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led3, HIGH);
  delay(100);
  }*/

//Actividad 4
/*void setup(){
  pinMode(btn1, INPUT);
  pinMode(led1, OUTPUT);
}

void loop(){
  while (true){
    if (digitalRead(btn1) == LOW){
      digitalWrite(led1, HIGH);
    }
    
    else{
      digitalWrite(led1, LOW);}

    delay(100);
  }  
}*/

//Actividad 5
/*int ledState = LOW;
int lastButtonState = LOW;
void setup(){
  pinMode(led1, OUTPUT);
  pinMode(btn1, INPUT);
}

void loop(){
  int currentButtonState = digitalRead(btn1);
  if (lastButtonState == LOW && currentButtonState == HIGH){
    ledState = !ledState;
    digitalWrite(led1, ledState);
  }
  lastButtonState = currentButtonState;
  delay(100);
}*/

// Actividad 6
/*int ledState = LOW;
int lastButtonState = HIGH;
unsigned long lastDebounce=0;
unsigned long debounceDelay=50;

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(btn1, INPUT);
}

void loop(){
  int currentButtonState = digitalRead(btn1);

  if(currentButtonState != lastButtonState){
    lastDebounce=millis();
  }

  if ((millis() - lastDebounce) > debounceDelay){
    if (currentButtonState != ledState){
      ledState=currentButtonState;
      digitalWrite(led1, ledState == HIGH ? LOW:HIGH);
    }
  }
  lastButtonState = currentButtonState;
}*/

//Actividad 7
/*void setup(){
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(btn1, INPUT);
pinMode(btn2, INPUT);
}
void loop(){
  if (digitalRead(btn1)== HIGH){
    digitalWrite(led1, LOW);
  }
  else{digitalWrite(led1, HIGH);}

  if(digitalRead(btn2) == HIGH){
    digitalWrite(led2, LOW);
  }
  else{digitalWrite(led2, HIGH);}
}*/

// Actividad 8
/*int led[]={led1, led2, led3, led4, led5, led6, led7, led8};
int sw1_[]= {sw1_1,sw1_2,sw1_3,sw1_4,sw1_5,sw1_6,sw1_7,sw1_8};

void setup(){
  for (int i=0; i<8; i++){
    pinMode(led[i], OUTPUT);
    pinMode(sw1_[i], INPUT);
  }
}
void loop(){
  for (int i=0; i<8; i++){
    if(digitalRead(sw1_[i])==HIGH){
      digitalWrite(led[i], HIGH);
    }
    else{
      digitalWrite(led[i], LOW);
    }
  }
}*/

//Actividad 9
/*int led[]={led1, led2, led3, led4, led5, led6, led7, led8};
int currentLed=0;
void setup(){
  for (int i=0; i<8; i++){
    pinMode(led[i], OUTPUT);
  }
  pinMode(btn1, INPUT);
}

void loop(){

  if (digitalRead(btn1)==LOW){
    digitalWrite(led[currentLed], HIGH);
    currentLed = (currentLed + 1) % 8;
    delay (100);
  }
  else{
    for (int i=0; i<8; i++){
      digitalWrite(led[i], LOW);
      }
  } 
}*/

// Actividad 10
/*void setup(){
  pinMode(led1, OUTPUT);
  pinMode(sw1_1, INPUT);
  pinMode(sw1_2, INPUT);
  pinMode(sw1_3, INPUT);
}
void loop(){
  if (digitalRead(sw1_1)== HIGH){
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    delay(1000);
  }
  else if (digitalRead(sw1_2)== HIGH){
    digitalWrite(led1, HIGH);
    delay(750);
    digitalWrite(led1, LOW);
    delay(750);
  }
  else if (digitalRead(sw1_3)== HIGH){
    digitalWrite(led1, HIGH);
    delay(100);
    digitalWrite(led1, LOW);
    delay(100);
  }
  delay(100);
}*/

// Actividad 11
/*int led[]={led1, led2, led3, led4, led5, led6, led7, led8};

void setup(){
  for (int i=0; i<8; i++){
    pinMode(led[i], OUTPUT);
  }
  pinMode(sw1_1, INPUT);
  pinMode(sw1_2, INPUT);
  pinMode(sw1_3, INPUT);
  pinMode(sw1_4, INPUT);
}

void loop(){
  if (digitalRead(sw1_1) == HIGH){
    for (int i=0;i<8;i++){
      digitalWrite(led[i], HIGH);
      delay(500);
      digitalWrite(led[i], LOW);
    }
  }
  else if (digitalRead(sw1_2) == HIGH){
    for (int i=0;i<8;i+=2){
      digitalWrite(led[i], HIGH);
    }
    delay(500);

    for(int i=0;i<8;i+=2){
      digitalWrite(led[i],LOW);
      digitalWrite(led[i+1], HIGH);
    }
    delay(500);
    
    for (int i=0;i<8;i+=2){
      digitalWrite(led[i],LOW);
    }
  }
  else if (digitalRead(sw1_3)==HIGH){
    for (int i=0;i<8;i+=2){
      digitalWrite(led[i], HIGH);
      digitalWrite(led[i+1], HIGH);
      delay(500);
      digitalWrite(led[i], LOW);
      digitalWrite(led[i+1], LOW);
    }
  }
  else if (digitalRead(sw1_4)==HIGH){
    for (int i=0, j=7 ; i<=j ; i++, j--){
      digitalWrite(led[i], HIGH);
      digitalWrite(led[j], HIGH);
      delay(500);
      digitalWrite(led[i], LOW);
      digitalWrite(led[j], LOW);
      if (i==3 && j==4){
        i=5; j=2;
      }
    }
  }
}*/

// Actividad 13
/*int contrasena[] = {0,1,0,2};
int btn[]={btn1, btn2, btn3};
int userInput[5];
int inputIndex=0;

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  for (int i=0;i<3;i++){
    pinMode(btn[i], INPUT);
  }
}
void loop(){
  for (int i=0;i<3;i++){
    if (digitalRead(btn[i])==LOW){
      userInput[inputIndex]= btn[i];
      inputIndex++;
      delay(500);
    }
  }
  if (inputIndex==5){
    bool correct = true;
   for (int i=0;i<5; i++){
      if (userInput[i] != contrasena[i]){
        correct=false;
        break;
      }
    }
    if (correct){
      digitalWrite(led1, HIGH);
    }
    else{
      digitalWrite(led2, HIGH);
    }
    delay (10000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    inputIndex=0;
  }
}*/

// Actvidad 14
/*# include "esp_timer.h"
#define BLINK_TIME 500000

bool led1State = false;
bool led2State = false;
bool led3State = false;
bool led4State = false;

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

  esp_timer_create_args_t timerArgs = {};
  timerArgs.callback = blinkLEDs;
  timerArgs.name="blink_timer";

  esp_timer_handle_t blinkTimer;
  esp_timer_create(&timerArgs, &blinkTimer);
  esp_timer_start_periodic(blinkTimer, BLINK_TIME);
}

void loop(){
}

void blinkLEDs(void* args) {
  led1State = !led1State;
  led2State = !led2State;
  led3State = !led3State;
  led4State = !led4State;

  digitalWrite(led1, led1State);
  digitalWrite(led2, led2State);
  digitalWrite(led3, led3State);
  digitalWrite(led4, led4State);
}*/

// Actvidad 15
/*
void setup(){
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  Serial.begin(9600);

}
void loop(){
  if (Serial.available() > 0){
    char command = Serial.read();
    switch (command) {
      case '1':
        digitalWrite(led1, HIGH);
        break;
      case '2':
        digitalWrite(led1, LOW);
        break;
      case '3':
        digitalWrite(led2, HIGH);
        break;
      case '4':
        digitalWrite(led2, LOW);
        break;
      default:
        break;
    }
  }
}*/

//Actividad 16
int ledPar[]= {led2,led4,led6, led8};
int ledImp[]= {led1,led3,led5,led7};

void setup(){
  for(int i=0;i<4;i++){
    pinMode(ledPar[i], OUTPUT);
    pinMode(ledImp[i], OUTPUT);
  }
}

void loop(){
  for (int i=0;i<4;i++){
    digitalWrite(ledPar[i], HIGH);
    }
    delay(700);
  for (int i=0;i<4;i++){
    digitalWrite(ledImp[i], HIGH);
    }
    delay(300);
  for (int i=0;i<4;i++){
    digitalWrite(ledImp[i], LOW);
    }
    delay(300);
  for (int i=0;i<4;i++){
    digitalWrite(ledPar[i], LOW);
    }
    delay(700);
}