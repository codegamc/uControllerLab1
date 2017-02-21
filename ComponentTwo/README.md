#Component Two

In Component Two we will be learning about logic, and digital input.  To do this we will create an arduino sketch that turns on the LED in the previous sketch when there is a button pushed.  To do this, we need to add a push button to our board.  See wiring diagram.

This time, we need to initialize a pin as an input.  We still use `pinMode` but this time, we use: `pinMode(5, INPUT);` to set pin 5 as an input.

In order read value from the pin, we use `digitalRead()` which returns the value of the pin. In our example, `int buttonState = digitalRead(pushButton);` collects this vale. 

For a more complicated version of the Button lab, there is an attached *Debounce* sketch, which includes code to debounce the input.  This lab uses button pushes to toggle the LED from __on__ to __off__ and vice-versa.  
