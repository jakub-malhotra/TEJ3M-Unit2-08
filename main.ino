//Uses a potentiometer to determine how a servo spins
//Created by Jakub Malhotra
//Created on November 2023

#include <Servo.h>

Servo servoOne; 

int potPin = 0;
int value;   

void setup() {
    servoOne.attach(9);
}

void loop() {
    value = analogRead(potPin); 
    value = map(value, 0, 1023, 0, 180);     
    servoOne.write(value);                  
    delay(15);                           
}