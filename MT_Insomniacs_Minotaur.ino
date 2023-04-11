#include <Servo.h>

Servo myservo;
Servo myservo2;
const int buttonPin = 9;
const int buttonPin2 = 7;



void setup() {
  myservo.attach(11);
  myservo2.attach(13);
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
  myservo.write(0);
  myservo2.write(0);
  Serial.begin(9600);
}

void loop() {
  
  //Serial.println(digitalRead(buttonPin));

  if(digitalRead(buttonPin) == HIGH) {
    myservo.write(180);
  } else {
    myservo.write(0);
  }

  if(digitalRead(buttonPin2) == HIGH) {
    myservo2.write(90);
  } else {
    myservo2.write(0);
  }
}
