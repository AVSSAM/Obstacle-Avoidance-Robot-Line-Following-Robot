void setup() {
 
 Serial.begin(9600);
}

void loop() {
  int val=analogRead(A0);
  float voltage=(float)val*5/1023;
  float angle=(float)val*320/1023;
  Serial.println(angle);
  delay(10);
}
