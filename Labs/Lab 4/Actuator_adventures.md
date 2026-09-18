# Lab 4 Overview
## Ray Zhang
## Adventures with Actuators

This lab moves on from sensing the outside world, to affecting the outside world.
That's how AI takeovers happen, baby.
To see this effect, we hook up the ESP 32 to actuators such as the TT motors and servos
to examine how different models work in the physical world.  This lab covers
the basics behind programming and understanding these devices.

### Steps to take:

1. Start a new project in project IO
2. Find a power source
3. Hook up the power source, and adjust the voltage and current to appropriate values
4. Take the ESP 32 and the TT motar, and assemble the given circuit
5. Leave the positive end of the power source disconnected
6. Download the template code TT motor and TT motar rotate
7. Understand the code
8. Upload the code to the sensor
9. Examine the TT motor rotate code, and made it rotate as needed.  Recorded the video of it rotating
10. Examine the TT motor code, and changed around a few variables
11. Created TT motor EC, and coded the for loop to gradually speed up the motar
12. Downloaded the Servo code
13. Played around with the values and asked groupmates about the servos to figure out what the values mean
14. Coded the random servo, and tested it.  Recorded the video
15. Commented the code
16. Filled out the actuator_adventure document
17. Pushed all to git
18. Videos are all in Lab 4 folder

## Reflections

This lab is a bit tricky later on.  The TT motars and much easier to understand than the servos.
Coding this is simple, and I ran into a couple of hiccups through not remembering certain procedures.
Wiring up the circuit is also simple.  Everything felt completable, and the servos feel cool.
Some servos didn't have any arms so I had to screw them on myself.  It's fun stuff

## Some notes:

- Running a TT motor requires a voltage difference between the two pins
- Reversing the order of voltages through these pins reverses their rotation
- When a pin recieves less voltage through the analog writes, their speed slows down,
hitting no rotation at approximately 150, and causes a beeping noise.
- Servo minPulse and maxPulse defines the min and max angles the servos can go
- Delay pauses the code for a set duration
- Rotation range is set by the minPulse and maxPulse, and changes when one of these values change
- Set period changes how frequently the servo updates.  Less frequency means more choppy movement
