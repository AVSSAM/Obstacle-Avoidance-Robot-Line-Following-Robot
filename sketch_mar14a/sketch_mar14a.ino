void setup() {
  Serial.begin(9600);
}
 int a;boolean b;
void loop() {
int x=digitalRead(2);
int y=digitalRead(3);
int z=digitalRead(4);
a=analogRead(A0);
if(x==1){
  ledon(x,9);//9
      }
 if(y==1){
  ledon(y,10);//10
  } 
   if(z==1){
  ledon(z,11);//11
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

  
  void ledon(int s,int t){
  int val=0;  
while(b){
  a=analogRead(A0);
if(s==1){
  int val=a/1023*255;
  analogWrite(t,val);
  b=false;
  }
  }
    }

