# Google-DinosaurGame-Servo-LDR-
Playing Google Dinosaur Game with the help of LDR sensor and Servo Motor


This code is used to control the position of a servo motor based on the ambient light. The LDR sensor detects obstacles for the dinosaur and activates the servo motor. The servo motor is attached to the space key on the keyboard. Whenever a black obstacle is detected, the sensor triggers the servo motor, allowing the dinosaur to jump over the obstacles.

/*
  ServoMotor examp,
  The shaft of the servo motor connected to pin D9 rotates 60 degrees.
*/
#include <Deneyap_Servo.h>      // Adding the Deneyap Servo library 
#define ldrpin A0
Servo myservo;                  // Defining class for Servo

void setup() {  
  myservo.attach(D12);
  pinMode(ldrpin,INPUT);
  Serial.begin(115200);
}

void loop() {
  int ldr = analogRead(A0);
  Serial.println(ldr);
  if(ldr > 1500  ){myservo.write(150);delay(50);}
  else{myservo.write(180);}                     
}
