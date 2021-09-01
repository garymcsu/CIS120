int lightLevel;

void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  lightLevel = analogRead(A0);
  if (lightLevel > 300) {
    digitalWrite(9, LOW);
  } else {
    digitalWrite(9, HIGH);
  }
}
