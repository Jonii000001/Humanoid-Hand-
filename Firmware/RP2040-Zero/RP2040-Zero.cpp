#include <SPI.h> //library for the SPI communication
#include <tle5012b_reg.hpp> //library downloaded from Infineon

int DATA = 27; //data pin for the TLE5012B
int SCK = 26; //clock pin for the TLE5012B
int CSQ[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13}; //array for the CSQ pins, 14 sensors in total

void setup() {
  for(int i = 0; i < 14; i ++) { //set an array for the CSQ pins
  pinMode(CSQ[i], OUTPUT); //tell the program that the CSQ pins are OUTPUTS
  }
  SPI.setDataMode(DATA) = SPI_MODE0;
  SPI.setClockPin(SCK) = 26; //set the clock pin for the TLE5012B
  SPI.begin(); // start the communication system between the TLE5012B and the RP2040-Zero
 Serial.begin(1000000); // start the serial monitor

}

void loop() {
   for(int i = 0; i < 14; i ++) { //set an array for the CSQ pins, go trough all the sensor. Like you begin at 0 and go trough the value 13 (sensor 14) and reapeat the whole procress forever
   
  digitalWrite(CSQ[i], LOW); //turn the the CSQ pin on
double readAngle(CSQ[i]); //read the angle from the sensor
  digitalWrite(CSQ[i], HIGH); //turn the CSQ pin off

  Serial.print("Sensor "); //print the sensor number
  Serial.print(i); //print the sensor number

  delay(10); //a small delay that the chip isn't overhelmed







   






    }
}