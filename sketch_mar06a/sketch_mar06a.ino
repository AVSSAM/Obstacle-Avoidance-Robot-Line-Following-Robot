void setup() {
  pinMode(3,OUTPUT);
  Serial.println(9600);

}

void loop() {
  
  for(int j=0;j<256;j++){
    analogWrite(3,j);
    delay(5);  
  }for(int k=254;k>0;k--){
    analogWrite(3,k);
    delay(5);
  }
}
