void setup() {
  pinMode(9, OUTPUT);
  pinMode(3, INPUT_PULLUP);  // Single button (D3 works)
}

void loop() {
  if(digitalRead(3) == LOW) {
    digitalWrite(9, HIGH); delayMicroseconds(12);
    digitalWrite(9, LOW);  delayMicroseconds(25);  // Your working pattern
  }
}
