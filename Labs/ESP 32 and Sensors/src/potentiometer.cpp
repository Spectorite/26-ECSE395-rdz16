/*

#include <Arduino.h>

//Zero is a great number, so we'll use this as the potentiometer pin
#define POTENTIOMETER_PIN A0

//I'm not sure what this is supposed to do. Seems like a middle man to me
const int sensorPin = 0;

void setup() {
  //Baud rate
  Serial.begin(115200);
}

void loop() {
  //Read the potentiometer pin
  int sensorValue = analogRead(POTENTIOMETER_PIN);

  //Print the value, then wait a bit
  Serial.println(sensorValue);
  delay(50); 

  //Then we do it
}
*/