// Buzzer Pin = 40
// Joystick select pin = 5
// Joystick X-axis analog = 2
// Joystick Y-axis analog = 26
// uint16_t x, y, x00, y00;
// uint16_t colour;
// uint32_t z;

const int buzzerPin = 40;

// Joystick vars
const int joystickSel = 5;
const int joystickX = 2;
const int joysticky = 26;

void setup(){
  pinMode(joystickSel, INPUT_PULLUP);
  pinMode(buzzerPin,OUTPUT);  
}

void loop(){
  // read the analog value of Y axis
  joystickYState = analogRead(joystickY);
  // TODO map Y axis input range [0,4096] to the note range (unknown);
}

void beep(int note, int duration){
  tone(buzzerPin, note, duration/2);
  delay(duration/2);
  noTone(buzzerPin);
  delay(duration/2 + 20);  
}
