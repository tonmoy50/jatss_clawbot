#include<Servo.h>

int servoPin = 10;
Servo servoMotor;
void setup() {
  //Servo servoMotor;
  servoMotor.attach(servoPin, 0, 1500);
  //servoMotor.write(0);
  //servoMotor.writeMicroseconds(1000);


}
int val = 0;
void loop() {
  //servoMotor.write(0);
  /*servoMotor.write(val);
  delay(175);
  val = 99;
  servoMotor.write(val);
  delay(175);*/

  servoMotor.writeMicroseconds(000);
  

}
