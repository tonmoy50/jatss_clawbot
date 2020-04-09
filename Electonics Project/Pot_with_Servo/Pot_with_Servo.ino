#include<Servo.h>

int val;
int potmeter = A0;
Servo servo1;
int servo1Pin = 7;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(servo1Pin);
  pinMode(potmeter, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(potmeter);
  Serial.println(val);
  val = map(val, 0, 1023, 0, 179);
  Serial.println(val);
  servo1.write(val);
  delay(175);
  servo1.write(90);
  delay(2000);

}
