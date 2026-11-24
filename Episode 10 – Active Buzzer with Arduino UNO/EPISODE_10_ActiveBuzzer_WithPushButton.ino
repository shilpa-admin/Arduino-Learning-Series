
// Episode 10: Active Buzzer with Push Button

int buzzerPin = 8;
int buttonPin = 12;
int buttonState;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(buzzerPin, HIGH);  // Buzzer ON
  }
  else {
    digitalWrite(buzzerPin, LOW);   // Buzzer OFF
  }
}
