/*
Dileepa Jayawardena
myhub.lk
http://myhub.lk/a/Arduino_Tutorials_for_Beginners/video_14_attiny13a/
*/

int pins[]={3,4,0,1,2};
int count=5;
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(4, OUTPUT);

  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

// the loop function runs over and over again forever
long ltime = millis();
int pat = 0;
int pats = 4;
void loop() {
 if ((millis() - ltime) > 200) {
    ltime = millis();
    pat++;
    if (pat == pats) {
      pat = 0;
      clearLED();
    }
  }
  setPattern(pat);
 
}

void setPattern(int pt) {
  if (pt == 0) {
    runnun(HIGH,LOW,true);
  } else if (pt ==1) {
    runnun(LOW,HIGH,true);
  } else if (pt == 2) {
    runnun(HIGH,LOW,false);
  } else if (pt ==3) {
    runnun(LOW,HIGH,false);
  } 
}
void clearLED(){
   for(int i=0;i<count;i++){
     digitalWrite(pins[i],HIGH);
    }
  }
void runnun(int v1,int v2, boolean c){
  for(int i=0;i<count;i++){
    digitalWrite(pins[i],v1);
    delay(10);
   if(c){
     digitalWrite(pins[i],v2);
    }
    }
     for(int i=count-1;i>-1;i--){
   if(c){
     digitalWrite(pins[i],v1);
    }
    delay(10);
    digitalWrite(pins[i],v2);
    }
  }

