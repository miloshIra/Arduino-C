#include <Servo.h>

#define LEFTSERVOPIN 3
#define RIGHTSERVOPIN 11

Servo leftServo;
Servo rightServo;

int robotSpeed = 75;
int rightSpeed = 50;
int leftSpeed = 50;

int delayParam = 10;

void setup() {

  Serial.begin(9600);
  robotSetup();
 

}

void loop() {

  Serial.println("Forward");
  goForward();
  delay(delayParam * 100);
  goStop();
  
}

void robotSetup(){

  setSpeed(robotSpeed);
  pinMode(LEFTSERVOPIN, OUTPUT);
  pinMode(RIGHTSERVOPIN, OUTPUT);

  leftServo.attach(LEFTSERVOPIN);
  rightServo.attach(RIGHTSERVOPIN);
  goStop();
  
}

void setSpeed(int newSpeed){

  setSpeedLeft(newSpeed);
  setSpeedRight(newSpeed);
  
}

void setSpeedLeft(int newSpeed){

  if(newSpeed >= 100) {newSpeed = 100;}
  if(newSpeed <= 0) {newSpeed = 0;}
  leftSpeed = newSpeed * 0.9;
}

void setSpeedRight(int newSpeed){

  if(newSpeed >= 100) {newSpeed = 100;}
  if(newSpeed <= 0) {newSpeed = 0;}
  rightSpeed = newSpeed * 0.9;
}

void goForward(){
  leftServo.write(90 + leftSpeed);
  rightServo.write(90 - rightSpeed);
}

void goBackward(){
  leftServo.write(90 - leftSpeed);
  rightServo.write(90 - rightSpeed);
}
void goRight(){
  leftServo.write(90 + leftSpeed);
  rightServo.write(90 + rightSpeed);
}
void goLeft(){
  leftServo.write(90 - leftSpeed);
  rightServo.write(90 - rightSpeed);
}

void goStop(){
  leftServo.write(90);
  rightServo.write(90);
}

//  https://www.instructables.com/id/The-Arduino-Mothbot/ Робот што следи светлина дел погон
