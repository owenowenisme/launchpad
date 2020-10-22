#include <Arduino.h>
#define enable 22
#define s0 24
#define s1 26
#define s2 28
#define s3 30
#define sig 3


void setup() {
  pinMode(22, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(28, OUTPUT);
  pinMode(30, OUTPUT);
 
}


void loop() {


digitalWrite(enable,LOW);
for(int i=0;i<10000;i++){
digitalWrite(s0, LOW);
digitalWrite(s1, LOW);
digitalWrite(s2, LOW);
digitalWrite(s3, LOW);
analogWrite(sig,255);
//delayMicroseconds(1);
digitalWrite(s0, HIGH);
digitalWrite(s1, LOW);
digitalWrite(s2, LOW);
digitalWrite(s3, LOW);
analogWrite(sig,255);
//delayMicroseconds(1);

digitalWrite(s0, LOW);
digitalWrite(s1, HIGH);
digitalWrite(s2, LOW);
digitalWrite(s3, LOW);
analogWrite(sig,10);
//delayMicroseconds(1);




//delay(1000);
}

 }