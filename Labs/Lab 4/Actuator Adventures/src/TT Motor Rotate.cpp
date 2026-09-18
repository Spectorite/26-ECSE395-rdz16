/*#include <Arduino.h>

// Setting up pins
const int MOTOR_B_1A = A0;
const int MOTOR_B_1B = A1; 


void setup() {
  // Baud rate
  Serial.begin(115200);

  // Set all pins to outputs
  pinMode(MOTOR_B_1A, OUTPUT);
  pinMode(MOTOR_B_1B, OUTPUT); 

  Serial.println("I am set up!");
}

void loop() {

  //rdz16 here.  This looks to be a simple set of commands.  Just put each step sequentially like teaching a child how to cook or something.
  
  // Start by going clockwise for 5 seconds, rdz16
  Serial.println("Clockwise 5 seconds");
  
  digitalWrite(MOTOR_B_1A, LOW);
  digitalWrite(MOTOR_B_1B, HIGH);
  delay(5000);

  // Pause for 2 seconds, rdz16
  Serial.println("Stop for 2 seconds");
  
  digitalWrite(MOTOR_B_1A, LOW);
  digitalWrite(MOTOR_B_1B, LOW);
  delay(2000);

  // Then go counterclockwiise for 5 seconds, rdz16
  Serial.println("Counterclockwise for 5 seconds");
 
  digitalWrite(MOTOR_B_1A, HIGH);
  digitalWrite(MOTOR_B_1B, LOW);
  delay(5000);


  // Stop, then rinse and repeat, rdz16
  Serial.println("Stop for 2 seconds");
  
  digitalWrite(MOTOR_B_1A, LOW);
  digitalWrite(MOTOR_B_1B, LOW);
  delay(2000);

}
//Cool stuff
//Very movable
*/