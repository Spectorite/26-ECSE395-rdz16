

#include <Arduino.h>


// 0 is still a great number, and the LED has unlucky number 13
//Just so everycody knows what is which. rdz16
const int sensorPin = A0;
const int ledPin = 13;

void setup() {
    //Baud rates and pin setup
    Serial.begin(115200);

    //LED pin is marked as output as we are directly setting it
    pinMode(sensorPin, INPUT);
    pinMode(ledPin, OUTPUT);
}

void loop() {

    
  int sensorValue = digitalRead(sensorPin);

  if (sensorValue == HIGH){ //

    Serial.println("Touch Detected");

    digitalWrite(ledPin, HIGH);


  }else{

    Serial.println("No Touch Detected");

    digitalWrite(ledPin, LOW);


  }
  delay(50); 

  //Then we do it
}