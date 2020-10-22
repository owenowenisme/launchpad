#include <Arduino.h>
#define enable 22
#define s0 24
#define s1 26
#define s2 28
#define s3 30
#define sig 3


void setup() {
  Serial.begin(9600);
  pinMode(22, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(28, OUTPUT);
  pinMode(30, OUTPUT);
 
}
int time;
void loop() {
digitalWrite(enable,LOW);
time=millis()/1000;
if(time%7==1){
digitalWrite(s0, LOW);
digitalWrite(s1, LOW);
digitalWrite(s2, LOW);
digitalWrite(s3, LOW);
analogWrite(sig,255);

digitalWrite(s0, HIGH);
digitalWrite(s1, LOW);
digitalWrite(s2, LOW);
digitalWrite(s3, LOW);
analogWrite(sig,255);


digitalWrite(s0, LOW);
digitalWrite(s1, HIGH);
digitalWrite(s2, LOW);
digitalWrite(s3, LOW);
analogWrite(sig,255);

}
if(time%7==2){
digitalWrite(s0, HIGH);
digitalWrite(s1, LOW);
digitalWrite(s2, LOW);
digitalWrite(s3, LOW);
analogWrite(sig,255);


digitalWrite(s0, LOW);
digitalWrite(s1, HIGH);
digitalWrite(s2, LOW);
digitalWrite(s3, LOW);
analogWrite(sig,255);

}
if(time%7==3){
digitalWrite(s0, LOW);
digitalWrite(s1, LOW);
digitalWrite(s2, LOW);
digitalWrite(s3, LOW);
analogWrite(sig,255);

digitalWrite(s0, LOW);
digitalWrite(s1, HIGH);
digitalWrite(s2, LOW);
digitalWrite(s3, LOW);
analogWrite(sig,255);

}
if(time%7==4){
digitalWrite(s0, LOW);
digitalWrite(s1, LOW);
digitalWrite(s2, LOW);
digitalWrite(s3, LOW);
analogWrite(sig,255);

digitalWrite(s0, HIGH);
digitalWrite(s1, LOW);
digitalWrite(s2, LOW);
digitalWrite(s3, LOW);
analogWrite(sig,255);
}
if(time%7==5){
digitalWrite(s0, LOW);
digitalWrite(s1, HIGH);
digitalWrite(s2, LOW);
digitalWrite(s3, LOW);
analogWrite(sig,255);

}
if(time%7==6){


digitalWrite(s0, HIGH);
digitalWrite(s1, LOW);
digitalWrite(s2, LOW);
digitalWrite(s3, LOW);
analogWrite(sig,255);



}
if(time%7==0){
digitalWrite(s0, LOW);
digitalWrite(s1, LOW);
digitalWrite(s2, LOW);
digitalWrite(s3, LOW);
analogWrite(sig,255);
}





}

   


