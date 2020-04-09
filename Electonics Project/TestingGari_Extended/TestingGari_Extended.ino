#include<Servo.h>
Servo servoMotor;
int servopin = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(3, OUTPUT);
  //pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  servoMotor.attach(servopin);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  /*digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);*/

  //digitalWrite(5, HIGH);
  //digitalWrite(4, LOW);

  servoMotor.write(0);
  

}
