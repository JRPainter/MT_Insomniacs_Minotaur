#include <Servo.h>

Servo myservo;
Servo myservo2;
const int buttonPin = 9;
const int trigPin = 5;
const int echoPin = 6;

long duration;
int distance;

void setup() {
  myservo.attach(11);
  myservo2.attach(13);
  pinMode(buttonPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  myservo.write(0);
  myservo.write(0);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  //Serial.print("Distance: ");
  //Serial.println(distance);
  //Serial.println(digitalRead(buttonPin));

  if(digitalRead(buttonPin) == HIGH) {
    myservo.write(180);
  } else {
    myservo.write(0);
  }

  if(distance < 7) {
    myservo2.write(180);
  } else {
    myservo2.write(0);
  }
}
