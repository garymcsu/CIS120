#include <LiquidCrystal.h>
#include <UltraDistSensor.h>
#include <Wire.h> 

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

UltraDistSensor mysensor;
float reading;
int LED = 2;
int Buzzer = 7;

const int buttonPin = 2;

void setup() {
  pinMode(LED, OUTPUT)
  pinMode(Buzzer, OUTPUT)
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
    if(distance < 6.5){
      digitalWrite(LED, HIGH);
      }
    else {
      digitalWrite(LED, LOW);
    }
    
    if (distance > 6.5) {
    noTone(Buzzer);
    }
    else {
  tone(Buzzer, 100);
  delay(100);
  noTone(Buzzer);
  delay(100);
  }
  
}
}