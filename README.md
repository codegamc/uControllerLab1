#Microcontroller Lab1

This lab is an introduction to Arduino Microcontrollers. In this lab, you will be familiarized with the Arduino platform, and how do develop for it. Arduinos are an open source microcontroller, developed to democratize access to microcontrollers. <Insert description of hardware here> 

Arduionos are controlled through somethign called __sketches__, which are the arduino code format. A __sketch__ has two parts, `setup()` and `loop()`.  `setup()` is code that runs once, on startup, while *loop()* runs infinitely, continuously repeating. You can think of `loop()` as a `while(True)` loop.  This is where program logic should go. 

Note on the arduino language from the arduino website:

	The Arduino language is based on C/C++. It links against AVR Libc and allows the use of any of its functions; see its user manual for details. 


To learn about the arduino platform, we will be doing a series of labs.  For todays lab __(Lab1)__, we will be using the following parts:

	Red LED
	Potentiometer
	Several Resistors: 1k, 10k

### First Component
The first lab component is learning to make an LED blink with the arduino.  To do this, we use the digital I/O of the arduino to set pin 13 high. To accomplish this, we use the method `digitalWrite(PIN, STATE)`.  This method can set the seceted PIN to be either high (__5v__), or low (__GND__). Through 

	digitalWrite(13, HIGH) 
we can set pin 13 high, which is 5v on standard arduinos (some arduino variants operate at 3.3 V but we won't be using those for these labs).
[Here](ComponentOne/README.MD) is the code for a sample Blink sketch, that sets pin 13 HIGH for 1 second, then sets it LOW for another, then repeats.

### Second Component
The second component is to learn about arduino logic and learning to use *input* as well as *output*. We will be using several methods, primarily `digitalRead(IN_PIN)`.  This method reads the state of a pin as either HIGH, or LOW, similar to the output `digitalWrite()`.  Through 

	state = digitalRead(13);
we set the variable `state` to the value retrieved through `digitalRead(13)`, which is the value of pin 13. (Here)[source] is the source code for a Button sketch, with the accompanying circuit diagram (here)[source].

We will expand upon the basic premise of the Second Component by adding a Serial Monitor to the arduino code, so we can see the state of the system on our computer.  This will also introduce us to an important concept called __Debouncing__, which you will discover more about in the second exercise of this component.  This will also introduce you to Boolean Logic on an Arduino.

### Third Component
This is analog in with Potentiometer
			Timing the length the LED will  be on
			Timing methods
			
### Fourth Component
PWM that LED
			Pot controls the brightness
			
## Closing thougts
This is closing thoughts.
		Now you know basics 
		Thoughts on where to go from here
			Simple ideas, with building blocks
		
