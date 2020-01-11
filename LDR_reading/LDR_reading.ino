#include <SoftwareSerial.h>
SoftwareSerial BTserial(10, 11); // RX | TX



void setup() {
  Serial.begin(9600);
  BTserial.begin(9600);

}

void loop() {
  int a;
  a=analogRead(A0);
  BTserial.println(a);
  //Serial.println(a);
  delay(1000);
  
} 
