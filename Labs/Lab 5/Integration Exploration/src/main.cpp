#include <Arduino.h>

//rdz16
//This module uses a photoresistor to detect whether there is light on the module
//Then, it rotates the motor when it detects light, and stops when it doesn't

//rdz16
//Originally, I was going to use a buzzer, but I was given the wrong equipment when
//Checking things out.  I used the motor instead.  The buzzer was used because
//One idea we had was to use the buzzer to remind the stakeholder
//The motor is from an idea where the window can automatically close

//rdz16
//The buzzer code is commented out, and I haven't tested it

//Pinouts.  PHOTORESISTOR_PIN uses A2 since A0 and A1 are saved for output pins. rdz16
const int PHOTORESISTOR_PIN = A2; 
const int MOTOR_B_1A = A0; 
const int MOTOR_B_1B = A1; 
//const int BUZZER_PIN = A0;

void setup() {
  // Set the baud rate. rdz16
  Serial.begin(115200);

  //Photoresistor pin takes in whether light goes in. rdz16
  pinMode(PHOTORESISTOR_PIN, INPUT);

  //Motor rotates depending on that
  pinMode(MOTOR_B_1A, OUTPUT);  
  pinMode(MOTOR_B_1B, OUTPUT);  
}

void loop() {

  //Take the sensor value of the photoresistor pin
  int sensorValue = digitalRead(PHOTORESISTOR_PIN);


  if (sensorValue == LOW){ //If there's light (LOW), rotate the motor

    Serial.println("Light Detected");

    //tone(BUZZER_PIN)

    analogWrite(MOTOR_B_1A, 0);
    analogWrite(MOTOR_B_1B, 200);


    //delay(500);
    // stop the tone playing:
    // noTone(BUZZER_PIN);

  }else{ //Otherwise, stop the motor. rdz16

    Serial.println("No Light Detected");

    analogWrite(MOTOR_B_1A, 0);
    analogWrite(MOTOR_B_1B, 0);
   //noTone(BUZZER_PIN); 

  }

  //Wait 50 milliseconds. rdz16
   delay(50);
}

