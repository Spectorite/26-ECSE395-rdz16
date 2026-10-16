/*
  This code initializes and sets up the RTC DS1302 module and prints the current date and 
  time on the serial monitor. It also checks if the RTC is running and has a valid date and time. 
  If not, it sets the RTC to the compile time.
  Due to the time required for compilation and upload, there may be a time difference.

  Board: ESP32 Development Board
  Component: Real Time Clock Module  (DS1302)
  Library: https://github.com/Makuna/Rtc (Rtc by Makuna)
*/
/*
#include <ThreeWire.h>
#include <RtcDS1302.h>

const int IO = GPIO_NUM_12;    // DAT
const int SCLK = GPIO_NUM_27;  // CLK
const int CE = GPIO_NUM_33;    // RST

const int buttonPin = GPIO_NUM_15;  // Pin number for the button
int buttonState = 0; 
int lastButtonState = 0;
bool buttonFlag = false;
int minutes = -1;
int seconds = -1;
int alarmSetAtMinutes = -1;
int alarmSetAtSeconds = -1;
bool alarmSet = false;
//bool isSnoozing = false;
bool alarmSounding = false;
bool stateChangedThisTick = false;

ThreeWire myWire(IO, SCLK, CE);
RtcDS1302<ThreeWire> Rtc(myWire);

void printDateTime(const RtcDateTime& dt) {
  char datestring[20];

  snprintf_P(datestring,
             countof(datestring),
             PSTR("%02u/%02u/%04u %02u:%02u:%02u"),
             dt.Month(),
             dt.Day(),
             dt.Year(),
             dt.Hour(),
             dt.Minute(),
             dt.Second());
  Serial.print(datestring);
}

std::tuple<int,int> getMinuteAndSecond(const RtcDateTime& dt) {
    
    return {dt.Minute(), dt.Second()};

}

void setup() {
  Serial.begin(115200);

  pinMode(buttonPin, INPUT);  // Initialize buttonPin as an input pin

  Serial.print("compiled: ");
  Serial.print(__DATE__);
  Serial.println(__TIME__);

  Rtc.Begin();

  RtcDateTime compiled = RtcDateTime(__DATE__, __TIME__);
  printDateTime(compiled);
  Serial.println();

  if (!Rtc.IsDateTimeValid()) {
    // Common Causes:
    //    1) first time you ran and the device wasn't running yet
    //    2) the battery on the device is low or even missing

    Serial.println("RTC lost confidence in the DateTime!");
    Rtc.SetDateTime(compiled);
  }

  if (Rtc.GetIsWriteProtected()) {
    Serial.println("RTC was write protected, enabling writing now");
    Rtc.SetIsWriteProtected(false);
  }

  if (!Rtc.GetIsRunning()) {
    Serial.println("RTC was not actively running, starting now");
    Rtc.SetIsRunning(true);
  }

  RtcDateTime now = Rtc.GetDateTime();
  if (now < compiled) {
    Serial.println("RTC is older than compile time!  (Updating DateTime)");
    Rtc.SetDateTime(compiled);
  } else if (now > compiled) {
    Serial.println("RTC is newer than compile time. (this is expected)");
  } else if (now == compiled) {
    Serial.println("RTC is the same as compile time! (not expected but all is fine)");
  }
}

bool checkIfAlarmSounds(int minutes, int seconds, int alarmMinutes, int alarmSeconds){

    if(alarmMinutes == -1 || alarmSeconds == -1){

        return false;


    }
    
    if(minutes != alarmMinutes){
        
        int secondsDifference = alarmSeconds - seconds;

        if(secondsDifference == 49 || secondsDifference == 50 or secondsDifference == 51){
            
            return true;

        } else{

            return false;
        }


    }else{

        int secondsDifference = seconds - alarmSeconds;

        if(secondsDifference == 9 || secondsDifference == 10 or secondsDifference == 11){
            
            return true;

        } else{

            return false;
        }

    }

}

void loop() {
  
  stateChangedThisTick = false;
  RtcDateTime now = Rtc.GetDateTime();

  //printDateTime(now);
  //Serial.println();
  
  std::tie(minutes, seconds) = getMinuteAndSecond(now);

  Serial.printf("%02u:%02u", minutes, seconds);
  Serial.println();

  if (!now.IsValid()) {
    // Common Causes:
    //    1) the battery on the device is low or even missing and the power line was disconnected
    Serial.println("RTC lost confidence in the DateTime!");
  }


  // Read the current state of the button
  lastButtonState = buttonState;
  buttonState = digitalRead(buttonPin);
  
  

  // Check if the button is pressed (LOW)
  if (buttonState == LOW && lastButtonState == HIGH ) {

    //Serial.println("Button was just pressed!");
    buttonFlag = true;
    
  } else {

    buttonFlag = false;

  }

  if(buttonFlag == true and alarmSounding == true && stateChangedThisTick == false){

    Serial.println("Alarm has been disarmed!");
    alarmSounding = false;
    stateChangedThisTick = true;

  }

  if(alarmSounding == false && alarmSet == true){

    alarmSounding = checkIfAlarmSounds(minutes, seconds, alarmSetAtMinutes, alarmSetAtSeconds);

  } else if (alarmSounding == true){

    Serial.println("Alarm has sounded!");
    alarmSet = false;

  }


  if(minutes != -1 && seconds != -1 && alarmSet == false && alarmSounding == false && stateChangedThisTick == false){

    Serial.println("Alarm has been set!");
    stateChangedThisTick = true;
    alarmSet = true;
    alarmSetAtMinutes = minutes;
    alarmSetAtSeconds = seconds;

  }

  if (!now.IsValid()) {
    // Common Causes:
    //    1) the battery on the device is low or even missing and the power line was disconnected
    Serial.println("RTC lost confidence in the DateTime!");
  }



  delay(1000);  // One Second
}

#define countof(a) (sizeof(a) / sizeof(a[0]))

*/