// Arduino pin numbers
const int SW_pin = 2; // digital pin connected to switch output
const int X_pin = 0;  // analog pin connected to X output
const int Y_pin = 1;  // analog pin connected to Y output

int UP = 7;
int DOWN = 6;
int LEFT = 5;
int RIGHT = 4;

void setup() {
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(115200);
}

void loop() {
  /*Serial.print("Switch:  ");
  Serial.print(digitalRead(SW_pin));
  Serial.print("\n");
  Serial.print("X-axis: ");
  Serial.print(analogRead(X_pin));
  Serial.print("\n");
  Serial.print("Y-axis: ");
  Serial.println(analogRead(Y_pin));
  Serial.print("\n\n");*/

//sense if Y is less than 300, turn on UP LED  
  if (analogRead(Y_pin) < 300 ) {

    digitalWrite(UP, HIGH); 
    Serial.print("up \n"); //can help you debug in the serial monitor, can delete
    delay(1000);

//sense if Y is greater than 700, turn on DOWN LED    
  } else if (analogRead(Y_pin) > 700) {
    
    digitalWrite(DOWN, HIGH);
    Serial.print("down  \n"); //can help you debug in the serial monitor, can delete
    delay(1000);

//sense if X is less than 466, turn on LEFT LED
  } else if (analogRead(X_pin) < 466) {
    
    digitalWrite(LEFT, HIGH);
    Serial.println("left \n"); //can help you debug in the serial monitor, can delete
    delay(1000);

//sense if X is greater than 700, turn on RIGHT LED    
  } else if (analogRead(X_pin) > 700) {
    
    digitalWrite(RIGHT, HIGH);
    Serial.println("right \n");  //can help you debug in the serial monitor, can delete
    delay(1000);
  }

//if none of the above true, turn all LEDs OFF
  else {
    digitalWrite(LEFT, LOW);
    digitalWrite(RIGHT, LOW);
    digitalWrite(UP, LOW);
    digitalWrite(DOWN, LOW);
    delay(1000);
  }
}






