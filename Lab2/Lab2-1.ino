/* Lab 2 Final Code
   Blinking Buzzer
 */

int lightLevel;

void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  lightLevel = analogRead(A0);
  if (lightLevel > 900) {
    noTone(10);
  digitalWrite(9, LOW);
  } else {
  tone(10, 100);
    digitalWrite(9, HIGH);
  delay(100);
    
  noTone(10);
    digitalWrite(9, LOW);
  delay(100);
  }
  
}

 

 