const int buttonOne = 33;     // the number of the pushbutton pin
const int buttonTwo = 32;

const int ledGreen =  38;      // the number of the LED pin
const int ledBlue =  37;

int buttonOneState = 0;         // variable for reading the pushbutton #1 status
int buttonTwoState = 0;

int currentNumber = 0;

void setup() {
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  // put your setup code here, to run once:
  pinMode(buttonOne, INPUT_PULLUP);
  pinMode(buttonTwo, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
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

void increment() {
  if (currentNumber < 100) {
    if (currentNumber == 99) {
      currentNumber = 0;
    } else {
      currentNumber++;
    }
  }
}

void decrement() {
  if (currentNumber >= 0) {
    if (currentNumber == 0) {
      currentNumber = 99;
    } else {
      currentNumber--
    }
  }
}
