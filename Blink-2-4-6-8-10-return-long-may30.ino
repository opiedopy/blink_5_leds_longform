/*
  Blink 2-4-6-8-10
  by Isaac Corbell, May 30, 2023

  Turns on 5 LEDs on for "led_delay" millisecond each, 
      then off for same amount, repeatedly.

*/
int Led2   =  2;
int Led4   =  4;
int Led6   =  6;
int Led8   =  8;
int Led10  = 10;

int led_delay = 100;   // these are milliseconds, 100ms = 100/1000 = 1/10 second
                      
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins as outputs.
  pinMode(Led2,  OUTPUT);
  pinMode(Led4,  OUTPUT);
  pinMode(Led6,  OUTPUT);
  pinMode(Led8,  OUTPUT);;
  pinMode(Led10, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(Led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(led_delay);                       // delay
  digitalWrite(Led2, LOW);    // turn the LED off by making the voltage LOW
  delay(led_delay);                        // delay
  
  digitalWrite(Led4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(led_delay);                        // delay
  digitalWrite(Led4, LOW);    // turn the LED off by making the voltage LOW
  delay(led_delay);                        // delay
  
  digitalWrite(Led6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(led_delay);                        // delay
  digitalWrite(Led6, LOW);    // turn the LED off by making the voltage LOW
  delay(led_delay);                        // delay
  
  digitalWrite(Led8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(led_delay);                       // delay
  digitalWrite(Led8, LOW);    // turn the LED off by making the voltage LOW
  delay(led_delay);                        // delay
  
  digitalWrite(Led10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(led_delay);                        // delay
  digitalWrite(Led10, LOW);    // turn the LED off by making the voltage LOW
  delay(led_delay);                        // delay

  digitalWrite(Led8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(led_delay);                       // delay
  digitalWrite(Led8, LOW);    // turn the LED off by making the voltage LOW
  delay(led_delay);                       // delay

  digitalWrite(Led6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(led_delay);                        // delay
  digitalWrite(Led6, LOW);    // turn the LED off by making the voltage LOW
  delay(led_delay);                        // delay

  digitalWrite(Led4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(led_delay);                        // delay
  digitalWrite(Led4, LOW);    // turn the LED off by making the voltage LOW
  delay(led_delay);                        // delay
  
}
