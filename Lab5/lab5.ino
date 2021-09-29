// Core library for code-sense
#if defined(ENERGIA)
#include "Energia.h"
#else // error
#error Platform not defined
#endif

#include <SPI.h>

#include <LCD_screen.h>
#include <LCD_screen_font.h>
#include <LCD_utilities.h>
#include <Screen_HX8353E.h>
#include <Terminal12e.h>
#include <Terminal6e.h>
#include <Terminal8e.h>
Screen_HX8353E myScreen;

#define buzzerPin 40

// Joystick vars
#define joystickSel 5
#define joystickX 2
#define joystickY 26
// these will change
int joystickSelState = 0;
int joystickXState, joystickYState;

uint16_t x, y, x00, y00;
uint16_t colour;
uint32_t z;


void setup(){
  pinMode(joystickSel, INPUT_PULLUP);
  pinMode(buzzerPin,OUTPUT);  
  myScreen.begin();
  x00 = 0;
  y00 = 0;
}

void loop(){
  // read the analog value of Y axis
  joystickYState = analogRead(joystickY);
  // Map Y axis input range [0,4096] to the note range;
  // For now I've chosen to place the note range between 200 and 800
  joystickYState = map(joystickYState, 0, 4096, 200, 800);
  // Display Y axis input on LCD screen
  myScreen.gText(0, myScreen.screenSizeY()-myScreen.fontSizeY(), "Hello There");
//  if(joystickYState != 0){
//    beep(joystickYState, 50);
//  }
}

void beep(int note, int duration){
  tone(buzzerPin, note, duration/2);
  delay(duration/2);
  noTone(buzzerPin);
  delay(duration/2 + 20);  
}
