void setup() {
  Serial.begin(9600);           // initialize serial:
  DDRD = DDRD | 0b11111100;     // configure port direction
  PORTD = 0b11111100;           // init of LEDs
}

void loop() {
  while (Serial.available() > 0) {
    byte command = Serial.read();
    if (command == 'A') {
      while (1) {
        // Blink yellow LEDs (semaphore Out of Service)
        PORTD = 0b10110111;
        delay(1000);                       // wait for a second
        PORTD = 0b11111111;
        delay(1000);                       // wait for a second
      }
    }
    else { PORTD = ~command; }
  }
}
