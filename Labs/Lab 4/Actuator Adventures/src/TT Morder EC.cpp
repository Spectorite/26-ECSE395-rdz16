/*#include <Arduino.h>

// Pin setup
const int MOTOR_B_1A = A0; 
const int MOTOR_B_1B = A1; 

//Starting value and intervals for the analog values
int analog_value = 0;
int add_value = 16;

void setup() {

  //Set up baud rate and pin modes
  Serial.begin(115200);

  pinMode(MOTOR_B_1A, OUTPUT);
  pinMode(MOTOR_B_1B, OUTPUT);  


  //Continuously increase the analog value until the max, with a 500 millisecond delay
  for(analog_value = 0; analog_value + add_value < 256; analog_value += add_value){
    analogWrite(MOTOR_B_1A, analog_value);
    analogWrite(MOTOR_B_1B, 0);

    delay(500);
  }
  

}

void loop() {

}

*/