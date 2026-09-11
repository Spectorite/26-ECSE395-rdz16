
/*
#include <Arduino.h>

// function prototype
float voltage(float analogvalue);

// 0 is still a great number
const int sensorPin = A0;

void setup() {
    Serial.begin(115200);
}

void loop() {
    // This is the line for printing in the serial.  The analogRead needs to convert the float
    //rdz16
    int analogValue = analogRead(sensorPin);
    float sensorVoltage = voltage(analogValue);
    Serial.println(sensorVoltage);

    //rdz16 Just wait a bit, 50 milliseconds is quick and efficient
    delay(50); 
}

// function to calculate output voltage
float voltage(float analogvalue){
    //In case things need changing, all values are listed as variables
    float voltage;
    float maxAnalogValue = 4095.0;
    float referenceVoltage = 3.3;
    
    //That's the formula, put in voltage, rdz16
    voltage = referenceVoltage*analogvalue / maxAnalogValue;
    return voltage;
}
*/