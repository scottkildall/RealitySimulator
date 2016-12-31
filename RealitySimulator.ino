/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */

void setup() {                
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(8, OUTPUT);     // GREEN
  pinMode(10, OUTPUT);    // RED
  pinMode(13, OUTPUT);    // WHITE  
  
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
}

void loop() {
  digitalWrite(8, HIGH);   // set the LED on
  digitalWrite(10, LOW);
  
  flashLoop();
  
  digitalWrite(8, LOW);    // set the LED off
  digitalWrite(10, HIGH);
  delay(6000);              // wait for a second
}

void flashLoop() {
  int i;
  
  for( i = 0; i < 200 ; i++ )
  {
    digitalWrite(13, HIGH);
    delay(50);
    digitalWrite(13 ,LOW);
    delay(50); 
  }
  
}
