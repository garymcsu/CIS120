// Buzzer Pin = 40
// Joystick vars:
// #define joystickX 2
// #define joystickY 26
// uint16_t x, y, x00, y00;
// uint16_t colour;
// uint32_t z;

int buzzerPin = 40;

void setup(){
  pinMode(buzzerPin,OUTPUT);  
}
void loop(){
  beep(440, 500);
  delay(2000);  
}

void beep(int note, int duration){
  tone(buzzerPin, note, duration/2);
  delay(duration/2);
  noTone(buzzerPin);
  delay(duration/2 + 20);  
}
