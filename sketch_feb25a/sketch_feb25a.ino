void setup() {
 Serial.begin(9600);
 pinMode(2,OUTPUT);

}

void loop() {

 if(Serial.available()){
  char c=Serial.read();
     if(c=='1'){
     digitalWrite(2,HIGH);
     }
     else if (c=='0'){
     digitalWrite(2,LOW);
      }
      if(digitalRead(2)==HIGH){
      Serial.println("LED ON");  
        }else{
          Serial.println("LED OFF");
          }
 }   
}
