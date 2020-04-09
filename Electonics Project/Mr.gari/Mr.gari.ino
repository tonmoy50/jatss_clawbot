/*making Input 2 of the L293D GND all the time*/
#include<String.h>
#include<Servo.h>
#define frontWheel 2
#define leftWheel 4
#define rightWheel 7
#define Enablerfront 8 
#define Enablerleft 5
#define Enablerright 6
#define servoPin1 3 //For servobase
#define servoPin2 9 //for servoAnkle
#define servoPin3 10 //forservolefty
#define servoPin4 11 //for servorighty

//#include<String>

/*Global variable declaration*/

int handle_value = 0;
int pwmEnablefront = 0;
int pwmEnableleft = 0;
int pwmEnableright = 0;;
char command;
String serialReader;
String potValue1;
String potValue2;
String potValue3;
String potValue4;
Servo servoBase, servoAnkle, servolefty, servorighty;
int servo1;
int servo2;
int servo_little1;
int servo_little2;
int rider1, rider2;
int val1, val2;
int angle;

//End of Global Value declaration

void setup() {
  Serial.begin(9600);
  pinMode(frontWheel, OUTPUT);  
  pinMode(leftWheel, OUTPUT);  
  pinMode(rightWheel, OUTPUT);

  digitalWrite(frontWheel, HIGH);  
  digitalWrite(leftWheel, HIGH);  
  digitalWrite(rightWheel, HIGH);
  
  pinMode(Enablerfront, OUTPUT);
  pinMode(Enablerleft, OUTPUT);
  pinMode(Enablerright, OUTPUT);
  servoBase.attach(servoPin1);
  servoAnkle.attach(servoPin2);
  servolefty.attach(servoPin3);
  servorighty.attach(servoPin4);

}

void hand_driver(){
    serialReader = Serial.readString();
    Serial.println(serialReader);
    
    char temp[15];
    strcpy(temp, serialReader.c_str());
    char* splitted = strtok(temp, " ,");;
    potValue1 = splitted;
    Serial.println(potValue1);
    servo1 = potValue1.toInt();
    
    splitted = strtok(NULL, " ,");
    potValue2 = splitted;
    Serial.println(potValue2);
    servo2 = potValue2.toInt();
    
    splitted = strtok(NULL, " ,");
    potValue3 = splitted;
    Serial.println(potValue1);
    servo_little1 = potValue3.toInt();
    
    splitted = strtok(NULL, " ,");
    potValue4 = splitted;
    Serial.println(potValue4);
    servo_little2 = potValue4.toInt();

    if(servo1 == 1){
     for(angle = rider1; angle < rider1 + 10; angle++){
      servoBase.write(angle);
      delay(50); 
     }
     rider1 = angle;
    }
    else  if(servo1 == 2){
      for(angle = rider1; angle > rider1 - 10; angle--){
        servoBase.write(angle);
        delay(50); 
      }
      rider1 = angle;
    }

    if(servo2 == 1){
     for(angle = rider1; angle < rider1 + 10; angle++){
      servoBase.write(angle);
      delay(50); 
     }
     rider2 = angle;
    }
    else  if(servo2 == 2){
      for(angle = rider2; angle > rider2 - 10; angle--){
        servoBase.write(angle);
        delay(50); 
      }
      rider2 = angle;
    }

    servolefty.write(servo_little1);
    servorighty.write(servo_little2);
    
    
    
    
    
}

void car_driver(){
  
    serialReader = Serial.readString();
    Serial.println(serialReader);
    
    char temp[15];
    strcpy(temp, serialReader.c_str());
    char* splitted = strtok(temp, " ,");;
    potValue1 = splitted;
    Serial.println(potValue1);
    pwmEnablefront = potValue1.toInt();
    splitted = strtok(NULL, " ,");
    potValue2 = splitted;
    Serial.println(potValue2);
    pwmEnableleft = potValue2.toInt();
    splitted = strtok(NULL, " ,");
    potValue3 = splitted;
    Serial.println(potValue1);
    pwmEnableright = potValue3.toInt();

    if(pwmEnablefront < 20 && pwmEnableleft < 20 && pwmEnableright <20){
      digitalWrite(Enablerfront, 0);
      //digitalWrite(Enablerfront, pwmEnablefront);
      
      digitalWrite(Enablerleft, 0);
      //digitalWrite(Enablerleft, pwmEnableleft);
      
      digitalWrite(Enablerright, 0);
      //digitalWrite(Enablerfront, pwmEnableright);
      
    }
    else{
      digitalWrite(Enablerfront, HIGH);
      //digitalWrite(Enablerfront, pwmEnablefront);
      
      //digitalWrite(Enablerleft, HIGH);
      digitalWrite(Enablerleft, pwmEnableleft);
      
      //digitalWrite(Enablerright, HIGH);
      digitalWrite(Enablerfront, pwmEnableright);
    }
}

void loop() {
  //char potValue;
  //int pwmValue = 0;

  if(Serial.available()){
    
    char command = Serial.read();
    if(command == 'c'){
      car_driver();
    }
    else if(command == 'h'){
      //                                                                                                                                                                                      Serial.println();
      hand_driver();
    }
  }
  

}
