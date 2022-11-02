/*Change of the angel with a 10 om pot*/

#include <Servo.h>
Servo myservo; //servo veriable name difinition
int potpin=0;
int val=0;

void setup() {
  myservo.attach(9);
  Serial.begin(9600);
}

void loop() {
val=analogRead(potpin)/2.84;
Serial.println(val);
myservo.write(val);
delay(500);

}
