
// Episode 11: Twinkle Twinkle Little Star

#define speakerPin 8

// Musical note frequencies
#define C4 262
#define D4 294
#define E4 330
#define F4 349
#define G4 392
#define A4 440

void setup() {
  pinMode(speakerPin, OUTPUT);
}

void loop() {

  // Twinkle Twinkle Little Star melody

  tone(speakerPin, C4, 400);
  delay(400);

  tone(speakerPin, C4, 400);
  delay(400);

  tone(speakerPin, G4, 400);
  delay(400);

  tone(speakerPin, G4, 400);
  delay(400);

  tone(speakerPin, A4, 400);
  delay(400);

  tone(speakerPin, A4, 400);
  delay(400);

  tone(speakerPin, G4, 800);
  delay(800);

  tone(speakerPin, F4, 400);
  delay(400);

  tone(speakerPin, F4, 400);
  delay(400);

  tone(speakerPin, E4, 400);
  delay(400);

  tone(speakerPin, E4, 400);
  delay(400);

  tone(speakerPin, D4, 400);
  delay(400);

  tone(speakerPin, D4, 400);
  delay(400);

  tone(speakerPin, C4, 800);
  delay(800);

  noTone(speakerPin);
  delay(2000);
}
