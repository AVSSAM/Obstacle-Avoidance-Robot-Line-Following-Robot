/*
  myhub.lk
  Arduino DC Voltmeter
  Visit below URL to get more informaton and circuit diagram
  http://myhub.lk/a/Arduino_Tutorials_for_Beginners/Sinhala_Arduino_Tutorial_09_%7C_Analog_Inputs_%7C_LDR_%7C_Battery_Monitor_%7C_myhub.lk
*/

float vPow = 5;
float r1 = 10000;
float r2 = 5000;

void setup() {
  Serial.begin(9600);
  Serial.println("--------------------");
  Serial.println("DC VOLTMETER");
  Serial.print("Maximum Voltage: ");
  Serial.print((int)(vPow / (r2 / (r1 + r2))));
  Serial.println("V");
  Serial.println("--------------------");

  delay(2000);
}

void loop() {
  float voltage = getVoltage(0);
  Serial.println(voltage);
  delay(100);
}

float getVoltage(int pin) {
  float v = (analogRead(pin) * vPow) / 1024.0;
  return  v / (r2 / (r1 + r2));
}
