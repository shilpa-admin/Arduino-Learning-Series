
// Episode 8: Introduction to Serial Monitor

int j = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(j);
  j = j + 1;
  delay(500);
}
