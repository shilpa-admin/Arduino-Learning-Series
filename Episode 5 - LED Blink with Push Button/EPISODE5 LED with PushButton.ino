
#define buttonPin 12
#define LEDPin 8

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(LEDPin, HIGH);
  } else {
    digitalWrite(LEDPin, LOW);
  }
}
