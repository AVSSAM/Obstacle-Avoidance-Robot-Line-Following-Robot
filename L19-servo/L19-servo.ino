#include<Servo.h>
Servo Nuwan;
void setup() {
   Nuwan.attach(3);
}

void loop() {
for(int i=0;i<=180;i++){
  Nuwan.write(i);
  delay(20);
  }
  for(int j=180;j>=0;j--){
  Nuwan.write(j);
  delay(20);
  }
}
