void setup() {
  for (int i=2;i<9;i++){
    pinMode(i,OUTPUT);
    }

}

void loop() {
 for(int j=2;j<8;j++){
  digitalWrite(j,HIGH);
  delay(100);
  digitalWrite(j,LOW);
  delay(1);
  }
 digitalWrite(4,HIGH);
 delay(100);
  digitalWrite(4,LOW);
 delay(1);
  digitalWrite(8,HIGH);
 delay(100);
  digitalWrite(8,LOW);
 delay(1);
}
