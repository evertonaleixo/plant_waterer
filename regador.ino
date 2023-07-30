#define WATER_GATE 8

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(WATER_GATE, OUTPUT);
  digitalWrite(WATER_GATE, HIGH);  // Shutdown the gate
}

// the loop function runs over and over again forever
void loop() {
  for(int i=0 ; i<3 ; i++){ // 3 Hours
    for(int j=0 ; j<60 ; j++) { // 60 Minutes
      for(int k=0 ; k<60 ; k++) {
        delay(1000); // 1 Second
      }
    }
  }
  // for(int k=0 ; k<60 ; k++) {
  //   delay(1000); // 1 Second
  // }
  
  digitalWrite(WATER_GATE, LOW);   // Open the gate
  delay(1000*30);                  // Allow water per 30 Seconds
  digitalWrite(WATER_GATE, HIGH);  // Shutdown the gate
}
