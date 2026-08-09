#include <Arduino.h> //library for the Arduino functions
#include <SPI.h> //library for the SPI communication
#include <tle5012b_reg.hpp> //library downloaded from Infineon

//define the pins for the SPI communication
const int PIN_MISO = 8; // SPI1 RX (Data pin for the TLE5012B)
const int PIN_SCK = 14; // SPI1 SCK (Clock pin for the TLE5012B, sets the speed of the communication)
const int PIN_MOSI = 15; // SPI1 TX (Sends commands through a 5kΩ Pull-up resistor on the RP2040-Zero)

//Array for the CSQ pins, 14 sensors in total,
const int PIN_CSQ[] = {0, 1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12, 13, 26}; //array for the CSQ pins, 14 sensors in total
const int total_encoders = 14; // Constant value for the total number of sensors

void setup() {
  Serial.begin(115200); // start the serial monitor

  for(int i = 0; i < total_encoders; i ++) { //set an array for the CSQ pins
  pinMode(PIN_CSQ[i], OUTPUT); // tell the program that the CSQ pins are OUTPUTS
  digitalWrite(PIN_CSQ[i], HIGH); // turn the CSQ pins off, HIGH is off, LOW is on (Like sleep mode for the sensors)
  }

  // Setup the SPI communication with the TLE5012B sensor, usin the SPI library, the pins are set to the correct values for the RP2040-Zero
  SPI1.setRX(PIN_MISO) = 8; //set the RX pin for the TLE5012B (SPI1 RX, that's the SPI receive pin, it receives data from the TLE5012B)
  SPI1.setTX(PIN_MOSI) = 15; //set the TX pin for the TLE5012B (SPI1 TX, that's the SPI transmit pin, it sends commands to the TLE5012B)
 SPI1.setSCK(PIN_SCK) = 14; //set the SCK pin for the TLE5012B (SPI1 SCK, that's the SPI clock pin, it sets the speed of the communication)
  SPI1.setFrequency(1000000); //set the frequency for the SPI communication,

  // Start the SPI communication with the TLE5012B sensor, using the SPI library, the pins are set to the correct values for the RP2040-Zero
  SPI1.begin(); // start the communication system SPI1 between the TLE5012B and the RP2040-Zero, I'm using SPI1 because the SPI0 is used for the USB communication, and the SPI1 is free to use for the TLE5012B sensor
 
}


void loop() {

   //set an array for the CSQ pins, go trough all the sensor. Like you begin at 0 and go through all the sensors, 14 in total, and read the angle from each sensor, one by one
    for(int i = 0; i < total_encoders; i ++) {
// Ask the sensor for the angle, I don't have to use digitalWrite, because otherwise I would wake up every sensor, and I only want to wake up one sensor at a time, so I use the readAngle function, which takes care of the CSQ pin for me, uint16 is the standarized data type for the TLE5012B sensor, it is a 16-bit value, and the readAngle function returns a 16-bit value, which is the angle in degrees
      uint16_t raw_Value = readAngle(i); 

//Calculate the angle in degrees, the .0 is the most important command, because it tells that the value is a float, and not an integer, and the 32768.0 is the maximum value of the TLE5012B sensor, which is 2^15 (in the binary system), because the TLE5012B sensor is a 16 bit sensor, and the 360.0 is the maximum value of the angle in degrees, like a circle can maximum be 360 degree, 
double angleDegress = (raw_Value / 32768.0) * 360.0; 

// Print the angle in degrees to the serial monitor
  Serial.print("Sensor "); //print the sensor number
  Serial.print(i); //print the sensor number
Serial.print(": "); //print the sensor number
  Serial.print(angleDegress, 2); //print the angle in degrees with 2 decimal places
Serial.println(" degrees"); //print the angle in degrees
    }
  delay(100); //a small delay that the chip isn't overhelmed

}


uint16_t readAngle(int sensorIndex) {
}
