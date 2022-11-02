#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,9,8,7,6);
int timer;

void setup(){
lcd.begin(16,20);
lcd.print("hello, world!");
}
void loop(){
lcd.setCursor(5,1);
timer = (millis()/1000);
lcd.print(60-timer);  
  }
