/*$$$$$$$$\         $$$$$$\   $$$$$$\   $$$$$$\ $$$$$$\         
\__$$  __|        $$  __$$ \ $$  __$$\ $$  __$$\ _$$  _|        
   $$ |  $$$$$$\  $$ /  $$ | $$ /  \__|$$ /  \__ |$$ |  $$$$$$$\ 
   $$ | $$  __$$\ $$$$$$$$ | $$$$\     $$$$\      $$ | $$  _____|
   $$ | $$ |  \__|$$  __$$ | $$  _|    $$  _|     $$ | $$ /      
   $$ | $$ |      $$ |  $$ | $$ |      $$ |       $$ | $$ |      
   $$ | $$ |      $$ |  $$ | $$ |      $$ |     $$$$$$\ $$$$$$$\ 
   \__| \__|      \__|  \__| \__|      \__|     \______\ _______*/
                  //  [https://bit.ly/3mkfHUh] //                                     
                         /* let it flow */                                 
                                                             

// first set of lights
int red = 2;            // pretty much done, some delays are short so it is easier to test.
int yellow = 3;
int green = 4;
int blue = 5;
int buttonPinState = 0;         // variable for reading the pushbutton #1 status
const int buttonPin = 7;

// second set of lights
int red1 = 10;
int yellow1 = 11;
int green1 = 12;
int blue1 = 13;
int buttonPin1State = 1;         // variable for reading the pushbutton #2 status
const int buttonPin1 = 6;

//------------
void setup() {
  Serial.begin(115200);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT); 
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(red1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(blue1, OUTPUT);
  pinMode(buttonPin1, INPUT_PULLUP);
}
void loop(){
  //Serial
  buttonPinState = digitalRead(buttonPin);
  buttonPin1State = digitalRead(buttonPin1);
  Serial.println("RESTART");
  Serial.println("---");
  Serial.println("Button1:");
  Serial.println(buttonPinState);
  Serial.println("Button2:");
  Serial.println(buttonPin1State);
  Serial.println("---");
  //--
    changeLights();
    delay(3000); // transition delay (red to green?)
}
void changeLights(){
  
// first mid-run serial check
Serial.println("Button1:");
Serial.println(buttonPinState);

// first light
  if ((digitalRead(buttonPin) == HIGH)) {
    digitalWrite(blue, HIGH);
    digitalWrite(red1, HIGH);
    delay(15000);                // left turn signal comes on 15 seconds before green light.
  } else {
  digitalWrite(blue, LOW);  }
    digitalWrite(green, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  digitalWrite(blue1, LOW);
  digitalWrite(green1, LOW);
  digitalWrite(yellow1, LOW);
    digitalWrite(red1, HIGH);
delay(5000);                  //            green to yellow
   digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(red, LOW);
    delay(3000);                //              yellow to red
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(3000);                      //                transition from red to green
  
// second mid-run serial check
Serial.println("Button2:");
Serial.println(buttonPin1State);

// second light
 if ((digitalRead(buttonPin1) == HIGH)) {
    digitalWrite(blue1, HIGH);
    delay(15000);
  } else {
  digitalWrite(blue1, LOW);  }
  digitalWrite(red1, LOW);
   digitalWrite(green1, HIGH);
  digitalWrite(yellow1, LOW);
delay(5000);                          // green to yellow
digitalWrite(blue, LOW);
  digitalWrite(blue1, LOW);
  digitalWrite(green1, LOW);
  digitalWrite(yellow1, HIGH);
  digitalWrite(red1, LOW);
  delay(3000);                   //           yellow to red
 digitalWrite(red1, HIGH);
digitalWrite(yellow1, LOW);

Serial.println("Button2:");
Serial.println(buttonPin1State);

}