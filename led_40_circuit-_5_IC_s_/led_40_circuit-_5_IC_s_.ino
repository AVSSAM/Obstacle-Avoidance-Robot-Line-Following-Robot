/*
by Dileepa Jayawardena
myhub.lk
http://myhub.lk/a/Arduino_Tutorials_for_Beginners/Sinhala_Arduino_Tutorial_11_%7C_Controlling_Thousands_of_LEDs_%7C_Shift_Registers_%7C_74HC595_
*/

int SER_Pin = 8;   //pin 14 on the 75HC595
int RCLK_Pin = 9;  //pin 12 on the 75HC595
int SRCLK_Pin = 10; //pin 11 on the 75HC595

//How many of the shift registers - change this ***
#define number_of_74hc595s 1

//numOfRegisterPins Counting number of pins
#define numOfRegisterPins number_of_74hc595s * 8

boolean registers[numOfRegisterPins];

void setup() {
  pinMode(SER_Pin, OUTPUT);
  pinMode(RCLK_Pin, OUTPUT);
  pinMode(SRCLK_Pin, OUTPUT);


  //reset all register pins
  clearRegisters();
  writeRegisters();
}


//set all register pins to LOW
void clearRegisters() {
  for (int i = numOfRegisterPins - 1; i >=  0; i--) {
    registers[i] = LOW;
  }
}

void writeRegisters() {

  digitalWrite(RCLK_Pin, LOW);

  for (int i = numOfRegisterPins - 1; i >=  0; i--) {
    digitalWrite(SRCLK_Pin, LOW);

    int val = registers[i];

    digitalWrite(SER_Pin, val);
    digitalWrite(SRCLK_Pin, HIGH);

  }
  digitalWrite(RCLK_Pin, HIGH);

}

void setRegisterPin(int index, int value) {
  registers[index] = value;
}


void loop() {
for(int i=0;i<numOfRegisterPins;i++){
  setRegisterPin(i, HIGH);
  writeRegisters();
  setRegisterPin(i, LOW);
  delay(100);
  }

for(int i=numOfRegisterPins-2;i>0;i--){
  setRegisterPin(i, HIGH);
  writeRegisters();
  setRegisterPin(i, LOW);
  delay(100);
  }
  
}

