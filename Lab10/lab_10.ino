#include <LiquidCrystal.h>
#include <UltraDistSensor.h>
#include <Wire.h> 

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

UltraDistSensor mysensor;
float reading;
float rreading;
int LED = 2;
int Buzzer = 7;
const int buttonPin = 2;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  Serial.begin(9600);
  mysensor.attach(4,5);//Trigger pin , Echo pin
  lcd.begin(16, 2);
}

void loop() {
    reading=mysensor.distanceInCm();
    rreading = reading * 0.393701; //Conversion from cm to in
     lcd.setCursor(0,0);
     lcd.print("Distance : ");
     lcd.setCursor(0, 1);  
     lcd.print(rreading);
     lcd.print("   Inches");
     
    delay(100);
    
    if(rreading < 6.5){
      digitalWrite(LED, HIGH);
      tone(Buzzer, 500);
      delay(25);
      digitalWrite(LED, LOW);
      noTone(Buzzer);
      delay(25);
    }
    else {
      noTone(Buzzer);
      digitalWrite(LED, LOW);
    }

}