#include <Servo.h>
int sPin = 7;



Servo tite;
void setup() {
Serial.begin(9600);
tite.attach(sPin);

}

void loop() {
tite.write(0);
Serial.println("0");
delay(1500);
tite.write(40);
Serial.println("90");
delay(750);

}
 