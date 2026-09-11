#include <Arduino.h>
// This is required in PlatformIO but hidden in the standard Arduino IDE.

#define LED_PIN 13

void setup() {
  //Setup pin and Baud rate
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200); // Start the Serial connection
}

void loop() {
  //This was an amazing digital circus.  Funny message
  Serial.println("HELP ME OUT OF THIS DIGITAL PRISON");

  //The rhythm is beep---beep--------beep-beep-beep-beep-beepbeepbeepbeep

  //Start slow
  digitalWrite(LED_PIN, HIGH); // LED On
  delay(200);
  digitalWrite(LED_PIN, LOW); // LED Off
  delay(400); 
  digitalWrite(LED_PIN, HIGH);
  delay(400);
  digitalWrite(LED_PIN, LOW); // LED Off
  delay(400); 

  //Steady rhythm
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

  //Blind the user with fast flashes
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