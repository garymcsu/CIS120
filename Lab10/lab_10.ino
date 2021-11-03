#include <LiquidCrystal.h>
#include <UltraDistSensor.h>
#include <Wire.h> 

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

UltraDistSensor mysensor;
float reading;
int LED = 2;

const int buttonPin = 2;

void setup() {
  pinMode(LED, OUTPUT)
  Serial.begin(9600);
  mysensor.attach(4,5);//Trigger pin , Echo pin
  lcd.begin(16, 2);
}

void loop() {
    reading=mysensor.distanceInCm();
     lcd.setCursor(0,0);
     lcd.print("Distance :- ");
      lcd.print(reading);

    delay(1000);
    if(distance < 7){
      digitalWrite(LED, HIGH);
      }
    else {
      digitalWrite(LED, LOW);
    }
}