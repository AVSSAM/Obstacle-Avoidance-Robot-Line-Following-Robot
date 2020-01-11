void setup() {
  Serial.begin(9600);
  pinMode(3,OUTPUT);

}

void loop() {
  int a=digitalRead(2);
  Serial.println(a);
  delay(100);
  digitalWrite(3,a);

}
