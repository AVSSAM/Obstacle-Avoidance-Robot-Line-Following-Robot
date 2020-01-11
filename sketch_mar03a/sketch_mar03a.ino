void setup(){
Serial.begin(9600);
pinMode(3,OUTPUT);
}
boolean buttonpress=false;
long presstime;
float lastbuttontime;

void loop() {
  int sw=digitalRead(2);
  if(sw==HIGH){
    if(!buttonpress){
      presstime=millis();
      }
    buttonpress=true;
  }
  else{
    if(buttonpress){
      lastbuttontime=(millis()-presstime)/1000.0
      print(lastbuttontime);
      println(" Seconds");
      changeLEDstate();
      buttonpress=false;
      }
    }
delay(100);
  
}


void changeLEDstate(){
  if (digitalRead(3)==HIGH){
    digitalWrite(3,LOW);  
    }
  else{
    digitalWrite(3,HIGH); 
    }
  
  
  }
