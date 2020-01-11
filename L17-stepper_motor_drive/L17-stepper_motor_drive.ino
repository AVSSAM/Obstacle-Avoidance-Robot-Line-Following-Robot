/*
myhub.lk Arduino Sinhala Tutrial 17
http://myhub.lk/a/Arduino_Tutorials_for_Beginners/arduinosinhala17_motor_controlling
*/


//defining connections to L298N
int input1 = 22;
int input2 = 23;
int input3 = 28;
int input4 = 29;
/*
EnA and EnB conect to 5V
*/

void setup()
{
  pinMode(input1,OUTPUT);
  pinMode(input2,OUTPUT);
  pinMode(input3,OUTPUT);
  pinMode(input4,OUTPUT);
}

void loop()
{
//1st step
digitalWrite(input1,HIGH);
digitalWrite(input2,LOW);
digitalWrite(input3,LOW);
digitalWrite(input4,HIGH);
delay(10);  //small delay between each step of 10ms

//2nd step
digitalWrite(input1,LOW);
digitalWrite(input2,HIGH);
digitalWrite(input3,LOW);
digitalWrite(input4,HIGH);
delay(10);

//3rd step
digitalWrite(input1,LOW);
digitalWrite(input2,HIGH);
digitalWrite(input3,HIGH);
digitalWrite(input4,LOW);
delay(10);

//4th step

digitalWrite(input1,HIGH);
digitalWrite(input2,LOW);
digitalWrite(input3,HIGH);
digitalWrite(input4,LOW);
delay(10);
}
