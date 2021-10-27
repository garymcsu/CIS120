# Lab9
 ## Goals 
   - ### Part 1 (Arduino)
      - Using Arduino, run code that sets position of servo motor using simple potentiometer.
      
      - (Optional for testing) Try using code similar to below reference from Lab7's Energia work to show 
         ACTIVE changes (pos/neg) in potentiometer pos on an Arduino board.

          ```C
          buttonOneState = digitalRead(buttonOne);
          if (buttonOneState == LOW) {
            delay(100);
            increment();
            Serial.println("incremented current number");
            digitalWrite(ledGreen, HIGH);
          }
          else {
            digitalWrite(ledGreen, LOW);
          }

          buttonTwoState = digitalRead(buttonTwo);
          if (buttonTwoState == LOW) {
            delay(100);
            decrement();
            Serial.println("decremented current number");
            digitalWrite(ledBlue, HIGH);
          }
          else {
            digitalWrite(ledBlue, LOW);
          }
          ``` 
      
   - ### Part 2 (Energia)
      - Convert code written for Arduino so that it runs on Energia. Simple enough, right? Requirements state to
        create a screen object and a servo motor object and initialize both in your code. 
      
      - (Optional for testing) Idk lol think of something cool
      
 ## Issues
  - ### Wiring
      - Changed pin A0 to A3 in Arduino part of code, because its _far_ more stable with our UNO for some reason, don't ask me.
