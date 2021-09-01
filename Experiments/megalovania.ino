/*
  Arduino UNO Megalovania
  Never coded before, fix my mistakes if found.
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(1, OUTPUT); // (A) [lower octave]
  pinMode(2, OUTPUT); // (B)
  pinMode(3, OUTPUT); // (C)
  pinMode(4, OUTPUT); // (D) [[starting note]]
  pinMode(5, OUTPUT); // (F)
  pinMode(6, OUTPUT); // (G)(G#) G# is a slide from A to G done in one note timespan
  pinMode(7, OUTPUT); // (A) 
  pinMode(8, OUTPUT); // (D) [higher octave]
}

// the loop function runs over and over again forever 

/* Song code where delay(#.#) ≈ note length from mp3
   in ms + 15% to factor for your eye seeing the LED.
*/

void loop() { 

  digitalWrite(4, HIGH); // (D)
  delay(87.5);
  digitalWrite(4, LOW);
  delay(59);

  digitalWrite(4, HIGH); // (D)
  delay(87.5);
  digitalWrite(4, LOW);
  delay(59);
  
  digitalWrite(8, HIGH); // (D^2)
  delay(87.5);
  digitalWrite(8, LOW);
  delay(116);
  
  digitalWrite(7, HIGH); // (A)
  delay(87.5);
  digitalWrite(7, LOW);
  delay(190);
  
  digitalWrite(5, HIGH); // (G#) SLIDE BLOCK
  delay(43.75);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(43.75);
  digitalWrite(6, LOW);
  delay(116);
  
  digitalWrite(6, HIGH); // (G)
  delay(87.5);
  digitalWrite(6, LOW);
  delay(116);
  
  digitalWrite(5, HIGH); // (F)
  delay(247.25);
  digitalWrite(5, LOW);
  delay(59);
  
  digitalWrite(4, HIGH); // (D)
  delay(87.5);
  digitalWrite(4, LOW);
  delay(59);
  
  digitalWrite(5, HIGH); // (F)
  delay(87.5);
  digitalWrite(5, LOW);
  delay(59);
  
  digitalWrite(6, HIGH); // (G)
  delay(87.5);
  digitalWrite(6, LOW);
  delay(59);
  
  digitalWrite(3, HIGH); // (C)
  delay(87.5);
  digitalWrite(3, LOW);
  delay(59);

  digitalWrite(3, HIGH); // (C)
  delay(87.5);
  digitalWrite(3, LOW);
  delay(59);
  
  digitalWrite(8, HIGH); // (D^2)
  delay(87.5);
  digitalWrite(8, LOW);
  delay(116);
  
  digitalWrite(7, HIGH); // (A)
  delay(87.5);
  digitalWrite(7, LOW);
  delay(190);
  
  digitalWrite(5, HIGH); // (G#) SLIDE BLOCK
  delay(43.75);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(43.75);
  digitalWrite(6, LOW);
  delay(116);
  
  digitalWrite(6, HIGH); // (G)
  delay(87.5);
  digitalWrite(6, LOW);
  delay(116);
  
  digitalWrite(5, HIGH); // (F)
  delay(247.25);
  digitalWrite(5, LOW);
  delay(59);
  
  digitalWrite(4, HIGH); // (D)
  delay(87.5);
  digitalWrite(4, LOW);
  delay(59);
  
  digitalWrite(5, HIGH); // (F)
  delay(87.5);
  digitalWrite(5, LOW);
  delay(59);
  
  digitalWrite(6, HIGH); // (G)
  delay(87.5);
  digitalWrite(6, LOW);
  delay(59);
  
  digitalWrite(2, HIGH); // (B)
  delay(87.5);
  digitalWrite(2, LOW);
  delay(59);

  digitalWrite(2, HIGH); // (B)
  delay(87.5);
  digitalWrite(2, LOW);
  delay(59);
  
  digitalWrite(8, HIGH); // (D^2)
  delay(87.5);
  digitalWrite(8, LOW);
  delay(116);
  
  digitalWrite(7, HIGH); // (A)
  delay(87.5);
  digitalWrite(7, LOW);
  delay(190);
  
  digitalWrite(5, HIGH); // (G#) SLIDE BLOCK
  delay(43.75);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(43.75);
  digitalWrite(6, LOW);
  delay(116);
  
  digitalWrite(6, HIGH); // (G)
  delay(87.5);
  digitalWrite(6, LOW);
  delay(116);
  
  digitalWrite(5, HIGH); // (F)
  delay(247.25);
  digitalWrite(5, LOW);
  delay(59);
  
  digitalWrite(4, HIGH); // (D)
  delay(87.5);
  digitalWrite(4, LOW);
  delay(59);
  
  digitalWrite(5, HIGH); // (F)
  delay(87.5);
  digitalWrite(5, LOW);
  delay(59);
  
  digitalWrite(6, HIGH); // (G)
  delay(87.5);
  digitalWrite(6, LOW);
  delay(59);
  
  digitalWrite(1, HIGH); // (A) bass
  delay(87.5);
  digitalWrite(1, LOW);
  delay(59);

  digitalWrite(1, HIGH); // (A) bass
  delay(87.5);
  digitalWrite(1, LOW);
  delay(59);
  
  digitalWrite(8, HIGH); // (D^2)
  delay(87.5);
  digitalWrite(8, LOW);
  delay(116);
  
  digitalWrite(7, HIGH); // (A)
  delay(87.5);
  digitalWrite(7, LOW);
  delay(190);
  
  digitalWrite(5, HIGH); // (G#) SLIDE BLOCK
  delay(43.75);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(43.75);
  digitalWrite(6, LOW);
  delay(116);
  
  digitalWrite(6, HIGH); // (G)
  delay(87.5);
  digitalWrite(6, LOW);
  delay(116);
  
  digitalWrite(5, HIGH); // (F)
  delay(247.25);
  digitalWrite(5, LOW);
  delay(59);
  
  digitalWrite(4, HIGH); // (D)
  delay(87.5);
  digitalWrite(4, LOW);
  delay(59);
  
  digitalWrite(5, HIGH); // (F)
  delay(87.5);
  digitalWrite(5, LOW);
  delay(59);
  
  digitalWrite(6, HIGH); // (G)
  delay(87.5);
  digitalWrite(6, LOW);
  delay(59);
  
}

void turnOn(){
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
}

void turnOff(){
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
}
