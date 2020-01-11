void setup() {
  Serial.begin(9600);

}

void loop() {
  int a=analogRead(A0);
  int pin=getpin(a);
if (pin==0){
  analogWrite(3,255);
  delay(100);
  }else if(pin==1){
    analogWrite(3,128);
    delay(100);
    }
  analogWrite(3,0);
  delay(100);
}
int pf=20;
int getpin(int a){
  for(int i=0;i<8;i++){
    if(a>(1023-pf*(i+1)+pf/2)){
      return i;
      }
    }
    return -1;
  }
