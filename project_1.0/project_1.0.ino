//M1
int enA = 10;
int in1 = 9;
int in2 = 8;
//M2
int enB = 5;
int in3 = 7;
int in4 = 6;

int i=20;
//buzzer


void setup() {
   Serial.begin(9600);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(3,OUTPUT);
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

void loop() {
int i=255;
  if (Serial.available()){
    char c=Serial.read();
      if(c=='m'){//stop
        mpower(1,0,0);
        mpower(2,0,0);
      }
       if(c=='q'){//turn right
        mpower(1,-1,255);
        mpower(2,1,255);
      }else if(c=='s'){//turn left
        mpower(1,1,255);
        mpower(2,-1,255);
      }else if(c=='p'){//go straight
        mpower(1,-1,255);
        mpower(2,-1,255);
      }else if(c=='r'){//backward
         mpower(1,1,255);
        mpower(2,-1,255);
        }else if(c=='g'){//horn
          tone(3,3830,200);
        }
      }
  }







