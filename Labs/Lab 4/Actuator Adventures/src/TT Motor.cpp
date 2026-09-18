/*#include <Arduino.h>

// TODO: Define your pins
// Hint: Look at your wiring. Which pins did you use?
const int MOTOR_B_1A = A0; // Replace 0 with your pin number
const int MOTOR_B_1B = A1; // Replace 0 with your pin number

void setup() {

  Serial.begin(115200);

  //Decreasing the analogwrite value makes 
  //the rotation weaker and makes the motor start beeping
  //At a lower value (150), the rotation stops
  //Swapping the analog values reverses rotation
  //Modifying delay modifies the amoung of time a write is in effect
  pinMode(MOTOR_B_1A, OUTPUT);
  pinMode(MOTOR_B_1B, OUTPUT);  


  analogWrite(MOTOR_B_1A, 200);
  analogWrite(MOTOR_B_1B, 0);

  delay(5000);

  analogWrite(MOTOR_B_1A, 0);
  analogWrite(MOTOR_B_1B, 200);

  delay(2000);

  analogWrite(MOTOR_B_1A, 0);
  analogWrite(MOTOR_B_1B, 0);
  

}

void loop() {

}

// Analog values are truly strange...
*/