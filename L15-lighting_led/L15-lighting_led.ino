  void setup() {
  Serial.begin(9600);
  for(int i=9;i<12;i++){
    pinMode(i,OUTPUT);
    analogWrite(i,0);
    }
}

void loop() {
if(Serial.available()){
  char c=Serial.read();
  int value=Serial.parseInt();
  if(c=='r'){
      analogWrite(9,value);
      }
    else if(c=='g'){
      analogWrite(11,value);
      }
    else if(c=='b'){
      analogWrite(10,value);
        }
      
  }

}
