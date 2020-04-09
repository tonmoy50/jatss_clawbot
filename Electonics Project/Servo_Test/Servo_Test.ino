#include<Servo.h>

Servo servoMotor;

void setup() {
  pinMode(3, OUTPUT);
  servoMotor.attach(3);
  servoMotor.write(180);
}

void loop() {
  for(int i = 0; i < 180; i++){
    servoMotor.write(i);
    delay(15);
  }
  /*servoMotor.write(30);
  servoMotor.write(30);
  servoMotor.write(31);*/

}
