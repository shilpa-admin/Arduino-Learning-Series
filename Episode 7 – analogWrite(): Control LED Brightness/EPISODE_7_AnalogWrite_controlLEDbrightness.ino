
// Episode 7: analogWrite() - Control LED Brightness

int LEDPin = 9;       // PWM pin
int bright = 180;     // Brightness value: 1 to 255

void setup() {
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  analogWrite(LEDPin, bright);
}
