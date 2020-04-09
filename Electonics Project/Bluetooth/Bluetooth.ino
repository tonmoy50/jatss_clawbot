char data = '1';
int ledpin = 7;

void setup() {
 Serial.begin(38400);
 pinMode(ledpin, OUTPUT);

}

void loop() {
  if(Serial.available() > 0){
    //data = Serial.read();
    //Serial.print("\n");

    if(data == '1'){
      Serial.write('1');
    }
    else if(data == '0'){
      Serial.write('0');
    }
  }

}
