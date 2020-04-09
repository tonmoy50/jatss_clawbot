#define potPin1 A0
#define potPin2 A1
#define potPin3 A2
#define potPin4 A3
#define enablePin 12

/*Global variable Declaration*/

int potValue1 = 0;
int potValue2 = 0;
int potValue3 = 0;
int potValue4 = 0;
String potStr1 = "";
String potStr2 = "";
String potStr3 = "";
String potStr4 = "";

//End of variable declaration

void setup() {
  Serial.begin(9600);
  pinMode(potPin1, INPUT);
  pinMode(potPin2, INPUT);
  pinMode(potPin3, INPUT);
  pinMode(potPin4, INPUT);
  pinMode(enablePin, INPUT);
  
  //Serial.println("Here");

}

void loop() {

  potValue1 = analogRead(potPin1);
  //potValue1 = map(potValue1, 498, 700, 0, 180);
  
  potValue2 = analogRead(potPin2);
  //potValue2 = map(potValue2, 600, 800, 0, 180);
  
  potValue3 = analogRead(potPin3);
  //potValue3 = map(potValue3, 600, 1000, 0, 180);
  
  potValue4 = analogRead(potPin4);
 // potValue4 = map(potValue4, 1000, 500, 0, 180);

  if(enablePin == HIGH){
    potStr1 = String(potValue1) + ",";
    potStr2 = String(potValue2) + ",";
    potStr3 = String(potValue3);
  
    Serial.print('c');
    Serial.print(potStr1);
    Serial.print(potStr2);
    Serial.print(potStr3);
    Serial.println();
  }
  else{
    potStr1 = String(potValue1) + ",";
    potStr2 = String(potValue2) + ",";
    potStr3 = String(potValue3) + ",";
    potStr4 = String(potValue4);
  
    Serial.print('h');
    Serial.print(potStr1);
    Serial.print(potStr2);
    Serial.print(potStr3);
    Serial.print(potStr4);
    Serial.println();
  }

  
  
  
  delay(500);

}
