#include <Servo.h> 
 
int b1 = 12; 
int b2 = 13; 
int estado_b1 = 1; 
int estado_b2 = 1; 
int angulo = 0; 
Servo servo1; 

void setup() 
{ 
  Serial.begin(9600); 
  pinMode(b1, INPUT); 
  pinMode(b2, INPUT); 
  servo1.attach(11); 
  servo1.write(0); 
} 
 
void loop() 
{ 
  estado_b1 = digitalRead(b1); 
  estado_b2 = digitalRead(b2); 
  if(estado_b1 == LOW) 
  { 
    angulo += 2;
    Serial.println("energia +");
  } 
  if(estado_b2 == LOW) 
  { 
    angulo -= 2;
    Serial.println("energia -");
  } 
  servo1.write(angulo); 
  delay(20); 
}
