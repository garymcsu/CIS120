const int buttonOne = 33;     // the number of the pushbutton #1 pin
const int buttonTwo = 32;     //    ''             pushbutton #2 pin

const int ledGreen =  38;      // the number of the green LED pin
const int ledBlue =  37;       //     ''             blue LED pin

int buttonOneState = 0;         // variable for reading the pushbutton #1 status
int buttonTwoState = 0;         //      ''                  pushbutton #2 status

int currentNumber = 0; 

// screen 
#include <SPI.h>
#include <LCD_screen.h>
#include <LCD_screen_font.h>
#include <LCD_utilities.h>
#include <Screen_HX8353E.h>
#include <Terminal12e.h>
#include <Terminal6e.h>
#include <Terminal8e.h>
Screen_HX8353E myScreen;

void setup() {
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(buttonOne, INPUT_PULLUP);
  pinMode(buttonTwo, INPUT_PULLUP);
  // box
  myScreen.begin();
  myScreen.dRectangle(10,10,108,108, whiteColour);

}
void loop() {
  // text
  myScreen.gText (30, 50, i32toa(currentNumber), whiteColour, blackColour, 5, 5);

  // button input
  buttonOneState = digitalRead(buttonOne);
  if (buttonOneState == LOW) {
    increment();
    digitalWrite(ledGreen, HIGH);
  }
  else {
    digitalWrite(ledGreen, LOW);
  }

  buttonTwoState = digitalRead(buttonTwo);
  if (buttonTwoState == LOW) {
    decrement();
    digitalWrite(ledBlue, HIGH);
  }
  else {
    digitalWrite(ledBlue, LOW);
  }
}

// increment
void increment() {
  if (currentNumber >= 0 && currentNumber <= 99) 
  {
    if (currentNumber == 99)
      {
      currentNumber = 0;
      } 
    else 
      {
      currentNumber++;
      }
  }
  else 
  {
    currentNumber = 0;
  }

void decrement() {
  if (currentNumber >= 0 && currentNumber <= 99)
  {
    if (currentNumber == 0)
      {
      currentNumber = 99;
      } 
    else 
      {
      currentNumber--;
      }
  }
  else 
  {
    currentNumber = 0;
  }