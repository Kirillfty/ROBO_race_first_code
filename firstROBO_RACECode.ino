#include<Ultrasonic.h>
  const int ain1 = 2;
  const int ain2 = 3;
  const int bin1 = 4;
  const int bin2 = 5;
  Ultrasonic ultrasonic(12, 13);
void setup(){
  pinMode(ain1,OUTPUT);
  pinMode(ain2,OUTPUT);
  pinMode(bin1,OUTPUT);
  pinMode(bin2,OUTPUT);

}
void GO(){
  digitalWrite(ain1,1);
  digitalWrite(ain2,0);

  digitalWrite(bin1,1);
  digitalWrite(bin2,0);
}
void left(){
  digitalWrite(ain1,0);
  digitalWrite(ain2,1);

  digitalWrite(bin1,1);
  digitalWrite(bin2,0);
}
void loop(){
  // if(ultrasonic.read(CM)<5){
  //   delay(100);
  //   left();
  // }
  // else{
  //   delay(100);
  //   GO();
  // }
  GO();
}