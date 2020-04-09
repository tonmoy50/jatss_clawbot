#include<Servo.h>
#define ledpin 7
#define Turn_Time 175
Servo servo1, servo2;

int servopin = 3;
int servopin2 = 5;
int angle = 0;


void setup() {
  //pinMode(13, OUTPUT);
  servo1.attach(servopin);
  servo1.write(180);
  servo2.attach(servopin2);
  servo2.write(180);
  pinMode(ledpin, OUTPUT);

}
int val = 50;
void loop() {
  for(int i = 0, j = 120; i < 120, j > 0; i++,j--){
    servo1.write(j);
    servo2.write(i);
    delay(50);
  }
  delay(50);

  for(int i = 120, j = 0; i > 0, j < 120; i--,j++){
    servo1.write(j);
    servo2.write(i);
    delay(50);
  }
  
  digitalWrite(ledpin, HIGH);

  
  //digitalWrite(13, HIGH);
  //servo.write(120);
  //delay(Turn_Time);
  //servo.write(90);
  //delay(500);
  //servo.write(false);
  /*servo.write(val);
  delay(150);
  //val = 90;
  servo.write(val);
  delay(200);*/

  /*for(angle = 0; angle < 90; angle++){
    servo.write(angle);
    delay(5);
  }
  //angle = 0;

  delay(2000);

  for(angle = 90; angle < 180; angle++){
    servo.write(angle);
    delay(5);
  }*/

}
