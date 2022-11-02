#include <Servo.h>
Servo myservo; //servo veriable name difinition
int angel;
void setup(){
  myservo.attach(9);
  Serial.begin(9600);
  Serial.print("servo=o_serial_simple ready");
}
void loop(){

angel=Serial.read();
if(angel>='0' && angel<='360')
{
//  angel=angel-'0';
  Serial.print("moving servo to ");
  Serial.print(angel,DEC);
//  for(int i=0; i<=50; i++)
//  {
//      myservo.write(angel);
//    }
  }
}
