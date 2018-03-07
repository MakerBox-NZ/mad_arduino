int TESTLED =7;
void setup () {
  pinMode (TESTLED, OUTPUT);
}
void loop() {
  digitalWrite (TESTLED, HIGH);
  delay(1000);
  digitalWrite(TESTLED, LOW);
  delay(1000);
}
  
