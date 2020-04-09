/*making Input 2 of the L293D GND all the time*/
#define frontWheel 2
#define leftWheel 4
#define rightWheel 7
#define Enablerfront 3 
#define Enablerleft 5
#define Enablerright 6

/*Global variable declaration*/

int handle_value = 0;
int pwmEnablefront = 0;
int pwmEnableleft = 0;
int pwmEnableright = 0;;
char command;
String serialReader = "";

//End of Global Value declaration

void setup() {
  Serial.begin(9600);
  pinMode(frontWheel, OUTPUT);  
  pinMode(leftWheel, OUTPUT);  
  pinMode(rightWheel, OUTPUT);
  
  pinMode(Enablerfront, OUTPUT);
  pinMode(Enablerleft, OUTPUT);
  pinMode(Enablerright, OUTPUT);

  //command = Serial.read();

}

void loop() {
  //char potValue;
  //int pwmValue = 0;

  if(Serial.available()){
    command = Serial.read();

    if(command == 'a' || command == 'b' || command == 'c'){
      //command = Serial.read();
      //Serial.println(command);
      //serialReader = "";
      serialReader = Serial.readString();
      Serial.println(serialReader);
      int val = serialReader.toInt();
      Serial.print("This is val");
      Serial.println(val);
      Serial.println(serialReader.indexOf('b'));
  
      if(command == 'f'){
        handle_value = serialReader.toInt();
        Serial.print("This is Handle: ");
        Serial.println(handle_value);
        digitalWrite(frontWheel, HIGH);
        digitalWrite(Enablerfront, handle_value);
      }
      else if(command == 'l'){
        handle_value = serialReader.toInt();
        digitalWrite(leftWheel, HIGH);
        digitalWrite(Enablerleft, handle_value);
      }
      else if(command == 'r'){
        handle_value = serialReader.toInt();
        digitalWrite(rightWheel, HIGH);
        digitalWrite(Enablerright, handle_value);
      }
      else{
        Serial.read();
      }
    }
    
  }
  

}
