int bulbol = A0;
void setup() {
Serial.begin(9600);
pinMode(bulbol, INPUT);
}

void loop() {
int a = analogRead(bulbol);
Serial.println(a);
delay(50);
}
