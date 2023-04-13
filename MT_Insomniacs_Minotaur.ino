#include <Servo.h>

Servo myservo;
Servo myservo2;
const int buttonPin = 13;
const int buttonPin2 = 2;
int buttonState = 0;
int previousButtonState = 0;
int button2State = 0;
int previousButton2State = 0;
bool buttonPressed = false;
bool button2Pressed = false;



void setup() {
  myservo.attach(6);
  myservo2.attach(3);
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
  myservo.write(180);
  myservo2.write(0);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  button2State = digitalRead(buttonPin2);
  

  if((buttonState == HIGH) && (buttonState != previousButtonState)) {
    buttonPressed = true;
  }

  if (buttonPressed){
    myservo.write(0);
  } else {
    myservo.write(180);
  }

  if((button2State == HIGH) && (button2State != previousButton2State)) {
    button2Pressed = true;
  } 

  if (button2Pressed){
    myservo2.write(90);
  } else {
    myservo2.write(0);
  }

  previousButtonState = buttonState;
  previousButton2State = button2State;
}
