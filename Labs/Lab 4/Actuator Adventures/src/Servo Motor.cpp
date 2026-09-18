#include <ESP32Servo.h>
// Don't forget to include the library!!
// From PlatfromIO library, search for ESP32 servo and add it to the project

// Define the servo and the pin it is connected to, what is your servo pin?
Servo myServo;
const int servoPin = A0;

// Define the minimum and maximum pulse widths for the servo
//A servo's pulse width defines what are considered its endpoints
//A different pulse width requires different numbers for the same angle
const int minPulseWidth = 700; // 0.7 ms
const int maxPulseWidth = 2000; // 2.0 ms

void setup() {
  // Attach the servo to the specified pin and set its pulse width range
  //Changing the pulse width also changes the rotation ranges as well
  //My changes make the servo's range more narrow
  myServo.attach(servoPin, minPulseWidth, maxPulseWidth);

  // Set the PWM frequency for the servo
  //Period  Hertz sets the frequency at which the servo updated
  //A lower Hz mean choppier movement
  myServo.setPeriodHertz(40); // Standard 50Hz servo
}

void loop() {
  // Rotate the servo from 0 to 180 degrees
  for (int angle = 0; angle <= 180; angle++) {
    int pulseWidth;
    // the map function is a puction that maps 0 degrees to 500 pulse width, and 180 degrees to 2500 pulse width
    // map(angle, min angle, max angle, min pulse width, max pulse width)
    pulseWidth = map(angle, 0, 180, minPulseWidth, maxPulseWidth);
    myServo.writeMicroseconds(pulseWidth);

    //Delay sets the tim between angle changes.  Shouldn't behave any differently than any other delay
    delay(20);
  }

  // Rotate the servo from 180 to 0 degrees
  for (int angle = 180; angle >= 0; angle--) {
    int pulseWidth;
    // the map function is a puction that maps 0 degrees to 500 pulse width, and 180 degrees to 2500 pulse width
    // map(angle, min angle, max angle, min pulse width, max pulse width)
    pulseWidth = map(angle, 0, 180, minPulseWidth, maxPulseWidth);
    myServo.writeMicroseconds(pulseWidth);
    delay(20);
  }
}

//Angles and seconds are so counterintuitive
