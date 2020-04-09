int ledpin = 7;
char data = '0';

void setup() {
  pinMode(ledpin, OUTPUT);
  Serial.begin(38400);
  digitalWrite(ledpin, HIGH);
}

void loop() {
  if(Serial.available() > 0){
    data = Serial.read();
    Serial.print("\n");
    if(data == '1'){
      digitalWrite(ledpin, HIGH);
    }
    else if(data == '0'){
      digitalWrite(ledpin, LOW);  
    }
  }

}
