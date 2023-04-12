#include <Servo.h>

Servo myservo;
Servo myservo2;
const int buttonPin = 9;
const int buttonPin2 = 7;
int buttonState = 0;
int previousButtonState = 0;
int button2State = 0;
int previousButton2State = 0;



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
  buttonState = digitalRead(buttonPin);
  button2State = digitalRead(buttonPin2);
  
  //Serial.println(digitalRead(buttonPin));

  if((buttonState == HIGH) && (buttonState != previousButtonState)) {
    myservo.write(180);
  } else {
    myservo.write(0);
  }

  if((button2State == HIGH) && (button2State != previousButton2State)) {
    myservo2.write(90);
  } else {
    myservo2.write(0);
  }
  previousButtonState = buttonState;
  previousButton2State = button2State;
}
