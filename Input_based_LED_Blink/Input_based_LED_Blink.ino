
void setup() {
    pinMode(12,OUTPUT);
    pinMode(13,OUTPUT);
    Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
    int input=Serial.parseInt();
    if(input==1){
      digitalWrite(12,HIGH);
      delay(5000);
      digitalWrite(12,LOW);
      delay(5000);
    }
    if(input==2){
      digitalWrite(13,HIGH);
      delay(5000);
      digitalWrite(13,LOW);
      delay(5000);
    }
  }
}
