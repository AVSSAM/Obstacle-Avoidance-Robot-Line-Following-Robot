/*
 * by Dileepa Jayawardena
 * myhub.lk
 * Arduino tutorial 15 Ex 1
http://myhub.lk/a/Arduino_Tutorials_for_Beginners/video_15_bluetooth
*/
void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    char c = Serial.read();
    Serial.println(c);
    if (c == '1') {
      digitalWrite(2, HIGH);
    } else if (c == '0') {
      digitalWrite(2, LOW);
    }
  }

}
