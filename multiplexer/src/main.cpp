#include <Arduino.h>
#define enable 22
#define s0 24
#define s1 26
#define s2 28
#define s3 30
#define sig 3




void loop() {
  int r=random(0,255);
  int g=random(0,255);
  int b=random(0,255);
 // analogWrite(5,100);analogWrite(7,100);analogWrite(6,100);w
digitalWrite(enable,LOW);
digitalWrite(s0, LOW);
digitalWrite(s1, LOW);
digitalWrite(s2, LOW);
digitalWrite(s3, LOW);
analogWrite(sig,30);
delay(1000);
digitalWrite(s0, HIGH);
digitalWrite(s1, LOW);
digitalWrite(s2, LOW);
digitalWrite(s3, LOW);
analogWrite(sig,30);
delay(1000);
digitalWrite(s0, LOW);
digitalWrite(s1, HIGH);
digitalWrite(s2, LOW);
digitalWrite(s3, LOW);
analogWrite(sig,30);
  
  

delay(1000);
 }

