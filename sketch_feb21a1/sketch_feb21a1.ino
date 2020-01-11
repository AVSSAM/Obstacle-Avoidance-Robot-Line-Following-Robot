void setup() {
  for (int i=2;i<7;i++){
    pinMode(i,OUTPUT);
   }

}

void loop() {
  for(int j=2;j<7;j++){
    digitalWrite(j,HIGH);
    delay(100);
    digitalWrite(j,LOW);
    delay(100);
    
    }
  for(int y=5;y>2;y=y-1){
    digitalWrite(y,HIGH);
    delay(100);
    digitalWrite(y,LOW);
    delay(100);
    }
}
