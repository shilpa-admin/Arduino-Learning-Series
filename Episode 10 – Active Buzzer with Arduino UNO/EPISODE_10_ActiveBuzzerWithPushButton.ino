
// Episode 10: Active Buzzer - Different Beep Patterns

int buzzerPin = 8;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Short beep
  digitalWrite(buzzerPin, HIGH);
  delay(200);
  digitalWrite(buzzerPin, LOW);
  delay(300);

  // Long beep
  digitalWrite(buzzerPin, HIGH);
  delay(600);
  digitalWrite(buzzerPin, LOW);
  delay(500);

  // Two quick beeps
  for (int i = 0; i < 2; i++) {
    digitalWrite(buzzerPin, HIGH);
    delay(150);
    digitalWrite(buzzerPin, LOW);
    delay(150);
  }

  // Pause before repeating
  delay(1000);
}
