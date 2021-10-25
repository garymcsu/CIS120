const int buttonOne = 8;     // the number of the pushbutton #1 pin
const int buttonTwo = 8;     //    ''             pushbutton #2 pin

int red = 2;
int yellow = 3;
int green = 4;
int a = 0;

int buttonOneState = 0;         // variable for reading the pushbutton #1 status
int buttonTwoState = 0;         //      ''                  pushbutton #2 status


void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  }


void loop(){
  buttonOneState = digitalRead(buttonOne);
  if (buttonOneState == LOW) {
    delay(100);
    a = 1;
  }
  else {
    a = 0;
  }

  Serial.println(currentNumber);
}

    changeLights();
    delay(15000);
}
void changeLights(){
  if (a = 0) {
    // green off, yellow on for 3 seconds
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(3000);
    // turn off yellow, then turn red on for 5 seconds
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(5000);
    // red and yellow on for 2 seconds (red is already on though)
    digitalWrite(yellow, HIGH);
    delay(2000);
    // turn off red and yellow, then turn on green
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    delay(3000);
    }
  else {
    // green off, yellow on for 3 seconds
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(3000);
    }
}
