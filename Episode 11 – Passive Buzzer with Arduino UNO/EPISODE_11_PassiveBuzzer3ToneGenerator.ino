
// Episode 11: Three Tone Generator

#define buzzerPin 8

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  tone(buzzerPin, 500);
  delay(1000);

  tone(buzzerPin, 1000);
  delay(1000);

  tone(buzzerPin, 2000);
  delay(1000);

  noTone(buzzerPin);
  delay(1000);
}
