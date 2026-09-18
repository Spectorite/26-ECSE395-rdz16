/*#include <ESP32Servo.h>
// Library included.  


// Define the servo and the pin it is connected to, what is your servo pin?
Servo myServo;
const int servoPin = A0;

// variable for random angle
int randomAngle;

// Variable for pulse width
int pulseWidth;

//The degree of rotation is between 0 and 180
const int minPulseWidth = 500; // 0.5 ms
const int maxPulseWidth = 2500; // 2.5 ms

void setup() {
  // Attach pins
  myServo.attach(servoPin, minPulseWidth, maxPulseWidth);


  // Set the standard frequency
  myServo.setPeriodHertz(50); // Standard 50Hz servo
}

void loop() {
    // Random angle assigned between 0 and 180
    randomAngle = random(0, 180); 

    // Convert angle to pulse width
    pulseWidth = map(randomAngle, 0, 180, minPulseWidth, maxPulseWidth); // from Servo Motor.cpp, what did you learn from using map function?
    myServo.writeMicroseconds(pulseWidth); // writing pulse width to servo

    delay(1000); // 1 second delay is good, love that tempo
}
    */