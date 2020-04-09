int led1 = 2;
int led2 = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  char str[5] = {'h', 'e', 'l', 'l'};
  Serial.println(str);
  pinMode(led1, OUTPUT); //Initializes pin12 as output
  pinMode(led2 , OUTPUT); //Initialize pin9 (PWM)
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(led1, HIGH); //sets pin2 to High
  //digitalWrite(led2, LOW);
  //delay(1000); //waits 1 second
  //digitalWrite(led1, LOW); // sets pin2 to low
  //digitalWrite(led2, HIGH);
  //delay(1000); //waits 1 second

  if(digitalWrite(led1, HIGH)){
    delay(500);
    digitalWrite(led1, LOW);
    delay(500);
    digitalWrite(led2, HIGH);
  }

  else if(digitalWrite(led2, LOW)){
    delay(500);
    digitalWrite(led2, LOW);
    delay(500);
    digitalWrite(led1, HIGH);
  }

  
}
