#include <Wire.h>      // Needed by Energia for Tiva C LaunchPad 
#include "OPT3001.h"
#define USE_USCI_B1
opt3001 opt3001;

const uint8_t backlightPin = 39; //PWM-capable pin tied to backlight
const uint16_t darkestLUX = 0;
const uint16_t brightestLUX = 4000;

const int lowestNote = 200;
const int highestNote = 800;


const int buzzerPin = 40;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}
void loop() {
  uint8_t note = 0;
  unsigned long readings;
  readings = opt3001.readResult();
  note = map(readings, darkestLUX, brightestLUX, lowestNote, highestNote);
  note = constrain(noteRange, lowestNote, highestNote);
  beep(noteRange, 50);
}

void beep(int note, int duration) {
  tone(buzzerPin, note, duration / 2);
  delay(duration / 2);
  noTone(buzzerPin);
  delay(duration / 2 + 20);
}
