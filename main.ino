//Uses a potentiometer to determine how a servo spins
//Created by Jakub Malhotra
//Created on November 2023

#include <Servo.h>

Servo servoOne; 

int potPin = 0;
int value;   
int angle;

void setup() {
    servoOne.attach(9);
}

void loop() {
    value = analogRead(potPin); 

    angle = value / 5.68; // 1023 (max pot value) / 180 (max servo angle)

    servoOne.write(angle);                  
    delay(15);                           
}