#include<String.h>

int potMeter;
int potPin1 = A0;
int potPin2= A1;
int potPin3= A2;
int forwardWheel = 2;
int rightWheel = 4;
int leftWheel = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potPin1, INPUT);
  pinMode(potPin2, INPUT);
  pinMode(potPin3, INPUT);
  pinMode(forwardWheel, OUTPUT);
  pinMode(leftWheel, OUTPUT);
  pinMode(rightWheel, OUTPUT);

   
  
}

void car_rider(){
  String test = String(180) + "," + String(180);
  Serial.println(test);

  char str[] = "0,45,60,90,120,180";

  char* splitted = strtok(str , " ,");
  while(splitted != NULL){
    Serial.println(splitted);
    splitted = strtok(NULL, " ,");

    String temp = splitted;
    Serial.println(temp + " TaserFace");
  
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  car_rider();
  
  /*if(potPin1 == 0 && potPin2 == 0 && potPin3 == 0){
    digitalWrite(forwardWheel, LOW);
    digitalWrite(rightWheel, LOW);
    digitalWrite(leftWheel, LOW);
  }*/
  

  //else if();

  /*char str[] = "0, 45, 60, 90, 120, 180";

  char* splitted = strtok(str , ",");
  while(splitted != NULL){
    Serial.println(splitted);
    splitted = strtok(NULL, ",");
  
  }*/

}
