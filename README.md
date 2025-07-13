# Arduino Project: LED Control Using Internal Pull-up Logic

This project demonstrates how to control three LEDs using three individual pushbuttons with an Arduino Uno board. Each button is configured using the internal pull-up resistor, meaning that when the button is not pressed, its corresponding LED turns on. When the button is pressed, the LED turns off. 

## Project Review

You can view and simulate the project here:  
[Open in Tinkercad](https://www.tinkercad.com/things/l1G3CLttWLD-frantic-jaban-stantia?sharecode=wCKAhBl1kferzQ2xOvuAcWyagAp2YfYwt0Jtn-NDfAw](https://www.tinkercad.com/things/3UchOBOk7dp-3-buttons?sharecode=6Ve1JMfu2CWfBpUAk4KIv_Zw7vHIs9aPYw1DxOi4yO0)

## Project Components

- Arduino Uno
- Breadboard
- 3 × Pushbuttons
- 3 × LEDs
- 3 × 220Ω resistors (for LEDs)
- Jumper wires
  
## Circuit Design

- Button 1: Connected to digital pin 2
- Button 2: Connected to digital pin 3
- Button 3: Connected to digital pin 4
- LED 1: Connected to digital pin 5
- LED 2: Connected to digital pin 6
- LED 3: Connected to digital pin 7

Each pushbutton is connected between its input pin and ground (GND). The internal pull-up resistor keeps the input at HIGH when the button is not pressed and pulls it to LOW when the button is pressed. Each LED is connected with a 220Ω resistor to limit the current.


