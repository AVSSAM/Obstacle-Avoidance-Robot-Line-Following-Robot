/*
  Author     : Dileepa Jayawardena
  myhub.lk Arduino Sinhala Tutrial 17
  http://myhub.lk/a/Arduino_Tutorials_for_Beginners/arduinosinhala17_motor_controlling
*/

//Motor sheld Pins
//M1
int enA = 5;
int in1 = 3;
int in2 = 4;
//M2
int enB = 6;
int in3 = 7;
int in4 = 8;



void setup() {
  Serial.begin(9600);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

}
/*
   mpower(motor number,rotation,speed);

  motor number
  1-1st motor
  2-2nd motor

  rotation
  1-Forword
  0-Stop
  -1- Backword

  speed
  0-255 PWM value

*/

void mpower(int motor, int rotation, int spd) {
  int pwm;
  int pA;
  int pB;
  if (motor == 1) {
    pwm = enA;
    pA = in1;
    pB = in2;
  } else if (motor == 2) {
    pwm = enB;
    pA = in3;
    pB = in4;
  } else {
    return;
  }

  if (rotation == 0) {
    digitalWrite(pA, LOW);
    digitalWrite(pB, LOW);
  } else if (rotation == 1) {
    digitalWrite(pA, HIGH);
    digitalWrite(pB, LOW);
  } else if (rotation == -1) {
    digitalWrite(pA, LOW);
    digitalWrite(pB, HIGH);
  }
  analogWrite(pwm, spd);

}
int normalspeed = 120;
void loop() {
  Serial.println("Forward...");
  mpower(1, -1, normalspeed  );
  mpower(2, -1, normalspeed );
  delay(2000);

  Serial.println("Reverse...");
  mpower(1, -1, normalspeed * 2 );
  mpower(2, -1, normalspeed * 2);
  delay(2000);

  Serial.println("Rotating LEFT");
  mpower(1, -1, normalspeed * 2);
  mpower(2, 1, normalspeed * 2);
  delay(2000);


  Serial.println("Rotating RIGHT");
  mpower(1, 1, normalspeed * 2 );
  mpower(2, -1, normalspeed * 2);
  delay(2000);

}
