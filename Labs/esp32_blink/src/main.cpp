#include <Arduino.h>
// This is required in PlatformIO but hidden in the standard Arduino IDE.

#define LED_PIN 13

void setup() {
  pinMode(LED_PIN, OUTPUT);
  // TODO: Define your baud rates
  Serial.begin(115200); // Start the Serial connection
}

void loop() {
  // TODO: Define your text output
  Serial.println("HELP ME OUT OF THIS DIGITAL PRISON");

  digitalWrite(LED_PIN, HIGH); // LED On
  delay(200);
  digitalWrite(LED_PIN, LOW); // LED Off
  delay(400); 
  digitalWrite(LED_PIN, HIGH);
  delay(400);
  digitalWrite(LED_PIN, LOW); // LED Off
  delay(400); 

  digitalWrite(LED_PIN, HIGH); // LED On
  delay(100);
  digitalWrite(LED_PIN, LOW); // LED On
  delay(100);
  digitalWrite(LED_PIN, HIGH); // LED On
  delay(100);
  digitalWrite(LED_PIN, LOW); // LED On
  delay(100);
  digitalWrite(LED_PIN, HIGH); // LED On
  delay(100);
  digitalWrite(LED_PIN, LOW); // LED On
  delay(100);
  digitalWrite(LED_PIN, HIGH); // LED On
  delay(100);
  digitalWrite(LED_PIN, LOW); // LED On
  delay(100);

  digitalWrite(LED_PIN, HIGH); // LED On
  delay(25);
  digitalWrite(LED_PIN, LOW); // LED On
  delay(25);
  digitalWrite(LED_PIN, HIGH); // LED On
  delay(25);
  digitalWrite(LED_PIN, LOW); // LED On
  delay(25);
  digitalWrite(LED_PIN, HIGH); // LED On
  delay(25);
  digitalWrite(LED_PIN, LOW); // LED On
  delay(25);
  digitalWrite(LED_PIN, HIGH); // LED On
  delay(25);
  digitalWrite(LED_PIN, LOW); // LED On
  delay(1000);

}