# Lab 3 Overview
## Ray Zhang
## Sensors and ESP 32

This lab explores the uses of potentiometers and touch sensors in tandem with the ESP 32.
The first part of the lab measures analog signals using the potentiometer.
The second part converts the analog singnal to a voltage measurement.
The third part implements the touch sensor using a digital signal

### Steps to take:

1. Start a new project
2. Set the baud rate in the ini
3. Copy the skeleton code over
4. Read the instructions
5. Watch the video
6. Change the name of the "values" file to "potentiometer"
7. Add code that detects analog changes to voltages to the "potentiometer" file
8. Wire the potentiometer to the ESP 32
9. Test the code and verify the outputs
10. Take a video of the circuit, and comment the code
11. Repeat steps 6-10 for part 2's "voltage", adding a method to the voltage function, and verifying the outputs
12. Create the touch.cpp file
13. Add code that sets up the touch sensors, such as ledPin and sensorPin
14. In the loop section, add code that detects a high signal from the touch sensor
15. Repeat steps 8-10 with the touch sensor
16. Clean up 
17. Write the playing_with_sensors.md

## Reflections

The lab is not too difficult.  The sections don't demand too much of a shift in tasks, so the
transitions between parts is smooth.  I did run into a couple coding issues stemming from the
voltage constructor, but by knowing what functions to call and what pins to use, as well as 
how to wire the circuit, I got the lab done.  I did appreciate how I learned more about the
ESP 32 and the touch sensors, which can come in useful for my stakeholder.
