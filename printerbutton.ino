#include<Arduino.h>
#include <Servo.h>
int sPin = 3;
int sPin2 = 4;
int butt = 5;
int butt2 = 6;

int buttonState;
int buttonState2;

Servo shrt;
Servo lng;
void setup() {
  Serial.begin(9600);
  shrt.attach(sPin);
  lng.attach(sPin2);
  pinMode(butt, INPUT_PULLUP);
  pinMode(butt2, INPUT_PULLUP);
}

void loop() {
  buttonState = digitalRead(butt);
  buttonState2 = digitalRead(butt2);


 // Serial.print(buttonState);
 // Serial.println(buttonState2);
  
  if (buttonState == HIGH && buttonState2 == HIGH ) {
    lng.write(0); 
    shrt.write(0);
    //Serial.println("standby");
    //delay(100); 
  } else if (buttonState == LOW && buttonState2 == LOW) {
    lng.write(40);
    Serial.println("long paper");
    //delay(1800);
  }else if (buttonState == HIGH && buttonState2 == LOW ) {
    shrt.write(50);
    Serial.println("short paper");
    //delay(1500);
  }else{}

  
  
   
  
}

