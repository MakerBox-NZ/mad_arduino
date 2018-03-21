int pushPin = 7;         // potentiometer wiper (middle terminal) connected to analog pin 3
int xPin = 0;
int yPin = 1;
int xMove = 0;
int yMove = 0;
      // outside leads to ground and +5V
int valPush = HIGH;     // variable to store the value read
int valX = 0;
int valY = 0;
void setup()
{
  pinMode(pushPin,INPUT);
  Serial.begin(9600);         //  setup serial
  digitalWrite(pushPin,HIGH);
}

void loop()
{
  valX = analogRead(xPin);    // read the x input pin
  valY = analogRead(yPin);    // read the y input pin
  valPush = digitalRead(pushPin); // read the push button input pin
  
  Serial.println(String(valX) + " " + String(valY) + " " + valPush);    //output to Java program
}
