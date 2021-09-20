#include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

const int buttonPin = 2;

float voltage = 0;                          //the voltage measured from the TMP36
float degreesC = 0;                         //the temperature in Celsius, calculated from the voltage
float degreesF = 0; 

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);

  lcd.begin(16, 2);
}

void loop() {
  lcd.clear();
  while (digitalRead(buttonPin) == LOW) {
    displayTemp();
  }
 displayPressButton();
}

void displayPressButton(){
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Press Button");
  delay(1000);
}

void displayTemp(){
    voltage = analogRead(A0) * 0.004882813;   //convert the analog reading, which varies from 0 to 1023, back to a voltage value from 0-5 volts
    degreesC = (voltage - 0.5) * 100.0;       //convert the voltage to a temperature in degrees Celsius
    degreesF = degreesC * (9.0 / 5.0) + 32.0; //convert the voltage to a temperature in degrees Fahrenheit

    lcd.clear();                              //clear the LCD
    lcd.setCursor(0, 0);                      //set the cursor to the top left position
    lcd.print("Degrees C: ");                 //print a label for the data
    lcd.print(degreesC);                      //print the degrees Celsius
    lcd.setCursor(0, 1);                      //set the cursor to the lower left position
    lcd.print("Degrees F: ");                 //Print a label for the data
    lcd.print(degreesF);  
    delay(1000);
}
