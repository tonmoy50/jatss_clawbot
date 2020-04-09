int pinhigh = 8;
int pinlow = 7;

void setup() {
  pinMode(pinhigh, OUTPUT);
  pinMode(pinlow, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinhigh, HIGH);
  digitalWrite(pinlow, LOW);

  //delay (5000);

  /*digitalWrite(pinhigh, LOW);
  digitalWrite(pinlow, HIGH);

  delay(5000);*/

}
