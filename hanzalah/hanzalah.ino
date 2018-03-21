int BLUELED1 =7;
int WHITELED1 = 11;
int JJPEG1 =5;
void setup () {
  pinMode (BLUELED1, OUTPUT);
  pinMode (WHITELED1, OUTPUT);
  pinMode (JJPEG1, OUTPUT);
}

void loop() {
  digitalWrite (BLUELED1, HIGH);
  digitalWrite (WHITELED1, HIGH); 
  digitalWrite (JJPEG1, HIGH);
  delay(1000);
  digitalWrite(BLUELED1, LOW);
  digitalWrite(WHITELED1, LOW);
  digitalWrite(JJPEG1, LOW);
  delay(1000);

}
  
