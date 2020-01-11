
//changing brightness of RGB led
void setup() {
  }
 int a;
 void loop() {
int x=digitalRead(2);
int y=digitalRead(3);
int z=digitalRead(4);
int a=analogRead(A0);
if(x==1){
  ledon(9);//9
      }
 if(y==1){
  ledon(10);//10
  } 
   if(z==1){
  ledon(11);//11
    }
    if(a==0&(x==1||y==1||z==1)){
      closee(9,10,11);
      }
  }

  
void closee(int p,int q,int r){
  analogWrite(p,0);
  analogWrite(q,0);
  analogWrite(r,0);
  }

  
  void ledon(int t){
  
  analogWrite(6,255);
  delay(2000);
  a=analogRead(A0);
  analogWrite(6,0);
  int val=a*255/1023;
  analogWrite(t,val);
    }

