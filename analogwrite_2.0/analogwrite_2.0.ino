void setup() {
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
Serial.begin(9600);
}

void loop() {
  digitalWrite(2,HIGH);
  int i=analogRead(A0);
  Serial.println(i);
  delay(20);
  int k=255*i/1023;
  analogWrite(3,k);

}
