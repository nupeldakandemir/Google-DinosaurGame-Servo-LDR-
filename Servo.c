/* ServoMotor examp, The shaft of the servo motor connected to pin D9 rotates 60 degrees. */

#include <Deneyap_Servo.h> //Adding the Deneyap Servo library

#define ldrpin A0

Servo myservo; //Defining class for Servo

void setup() {

myservo.attach(D12);

pinMode(ldrpin,INPUT);

Serial.begin(115200);

}

void loop() {

int ldr = analogRead(A0);

Serial.println(ldr);

if(ldr > 1500 ){myservo.write(150);delay(50);}

else{myservo.write(180);}

}