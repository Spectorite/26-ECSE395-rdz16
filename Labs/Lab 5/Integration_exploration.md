# Lab 5 Overview
## Ray Zhang
## Integration

This lab takes in all the previous labs and combines them into a final, sense and act system.
An introduction to small scale systems that can be extended into full products.
And finally applying the knowledge of labs 1-4.

### Steps to take:

1. Start a new project in project IO
2. Check out equipment from the Lab
3. Look over the previous lab code
4. Read over the equipment documentation
5. Write code to test the photoresistor
6. Assemble the circuit with the photoresistor and ESP 32
7. Connect the circuit to computer and upload the code
8. Verify the photoresistor by tapping the sensor
9. Assemble the rest of the circuit, connecting the motor to the ESP 32
10. Integrate the motor into the code
11. Test the code, verifying that the motor is running while there is light
12. Video tape the circuit
13. Comment the code
14. Write the reflection

## Reflections

This is one of the easier labs, mainly because everything I did was covered in a 
previous lab.  I think it does a good job of setting up the prototyping phase
as it familiarizes me with how most electrical devices work.  I also like reading
documentation to pass time.

## Some notes:

- The main code is main.cpp inside the src file.
- Sensor: photoresistor.  Actuator: TT motor
- ESP 32 hooked upto computer, connected to photoresistor and TT motor.  
- Used current limiter to 0.15 A, voltage used is 3.3 V
- The VCC of the Photoresistor is connected to the 3.3V of the ESP 32
- The GND of the Photoresistor is connected to the GND of the ESP 32
- The Output of the Photoresistor is connected to A2
- The VCC of the Motor is connected to the 3.3V of the ESP 32
- The GND of the Motor is connected to the GND of the ESP 32
- The B1A of the Motor is connected to A0 of the ESP 32
- The B1B of the Motor is connected to the A1 of the ESP 32
- The photo of the circuit and the video of the working circuit is included in the lab file