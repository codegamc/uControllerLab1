/*
 * This sketch blinks an LED attached to pin 13 at 1hz.
 */

/*This is a global variable*/
int ONE_SECOND = 1000;

/* the setup function runs once when you press reset or power the board*/
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

/*the loop function runs over and over again forever*/
void loop() {
  //Setting the LED to HIGH:
  digitalWrite(13, HIGH);           // turn the LED on (HIGH is the voltage level)
  delay(ONE_SECOND);                // wait for a second

  //Setting the LED to LOW
  digitalWrite(13, LOW);            // turn the LED off by making the voltage LOW
  delay(ONE_SECOND);                // wait for a second
}
