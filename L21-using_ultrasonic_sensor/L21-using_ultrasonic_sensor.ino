int Trigpin=11;
int Echopin=12;
long cm,inches,duration;
void setup() {
pinMode(11,OUTPUT);
pinMode(12,INPUT);
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
}
