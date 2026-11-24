
// Toggle LED state using a Push Button

int LEDPin = 8;
int buttonPin = 12;
int LEDState = 0;
int buttonState;
int buttonStateOld = LOW;

void setup() {
  pinMode(LEDPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  // Detect a new button press
  if (buttonState == HIGH && buttonStateOld == LOW) {
    LEDState = !LEDState;

    digitalWrite(LEDPin, LEDState);

    delay(50);
  }

  buttonStateOld = buttonState;
}
