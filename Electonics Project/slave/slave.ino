void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT);
}
void loop() {
  //Serial.write('E');
  if(Serial.available() > 0){
    char handle = Serial.read();
    Serial.println(handle);

    if(handle == 'N'){
      digitalWrite(7, HIGH);
    }
    else if (handle == '0'){
      digitalWrite(7, LOW);
    }
  }

}
