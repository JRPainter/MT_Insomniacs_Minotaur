#include <Servo.h>

Servo myservo;
const int buttonPin = 9;

void setup() {
  myservo.attach(11);
  pinMode(buttonPin, INPUT);
  myservo.write(0);
  Serial.begin(9600);
}

void loop() {
  
  Serial.println(digitalRead(buttonPin));
  if(digitalRead(buttonPin) == HIGH) {
    myservo.write(180);
  } else {
    myservo.write(0);
  }
}
