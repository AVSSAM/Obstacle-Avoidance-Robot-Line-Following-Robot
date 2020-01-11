int Trigpin=11;
int Echopin=12;
int buzzer=2;
long cm,inches,duration;
void setup() {
  pinMode(buzzer,OUTPUT);
pinMode(Trigpin,OUTPUT);
pinMode(Echopin,INPUT);
Serial.begin(9600);
digitalWrite(Trigpin,LOW);
delayMicroseconds(5);
}

void loop() {
  //Sending a pulse
digitalWrite(Trigpin,HIGH);
delayMicroseconds(10);
digitalWrite(Trigpin,LOW);
//Receiving
duration=pulseIn(Echopin,HIGH);


//converting time into distance
cm=(duration/2)/29.71;
inches=(duration/2)/74;
  
//printing outputs
Serial.print(duration);
Serial.print("microseconds ,");

Serial.print(cm);
Serial.print("cm ,");

Serial.print(inches);
Serial.println("inches ");

//buzzer
if(cm<30){
  tone(buzzer,(50-cm)*250,100);
  }
}
