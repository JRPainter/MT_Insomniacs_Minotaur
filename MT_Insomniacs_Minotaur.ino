#include <Servo.h>

Servo myservo;
const int buttonPin = 2;

void setup() {
  myservo.attach(9);
  pinMode(buttonPin, INPUT);
  myservo.write(0);
}

void loop() {
  if(digitalRead(buttonPin) == HIGH) {
    myservo.write(180);
  } else {
    myservo.write(0)
  }
}
