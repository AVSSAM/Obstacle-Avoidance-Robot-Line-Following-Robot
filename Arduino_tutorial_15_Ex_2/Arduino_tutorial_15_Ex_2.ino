/*
 * by Dileepa Jayawardena
 * myhub.lk
 * Arduino tutorial 15 Ex 2
http://myhub.lk/a/Arduino_Tutorials_for_Beginners/video_15_bluetooth
*/
int pins[] = {9, 10, 11};
void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 3; i++) {

    pinMode(pins[i], OUTPUT);
    analogWrite(pins[i], 255);
  }
}


void loop() {
  if (Serial.available()) {
    char c = Serial.read();
    int value = Serial.parseInt();
    //R100
    //G34
    //B55
    if (c == 'R') {
      analogWrite(pins[0], 255 - value );
    } else if (c == 'G') {
      analogWrite(pins[1], 255 - value);
    } else if (c == 'B') {
      analogWrite(pins[2], 255 - value);
    }


  }
}
