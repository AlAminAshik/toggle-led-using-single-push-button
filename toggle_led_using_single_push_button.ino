const int buttonPin = 3; // the pin that the pushbutton is connected to
const int ledPin = 13; // the pin that the LED is connected to

int buttonState = 0; // variable for reading the pushbutton status
int lastButtonState = 0; // variable for storing the last pushbutton status

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // set the pushbutton pin as input
  pinMode(ledPin, OUTPUT); // set the LED pin as output
}

void loop() {
  // read the current state of the pushbutton
  buttonState = digitalRead(buttonPin);

  // check if the button is pressed
  if (buttonState == LOW && lastButtonState == HIGH) {
    // toggle the LED
    digitalWrite(ledPin, !digitalRead(ledPin));
  }

  // save the current button state for the next iteration
  lastButtonState = buttonState;
  
  // add a short delay to debounce the button
  delay(50);
}
