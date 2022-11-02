int flame=0;
int beep=9;
int val=0;

void setup() {
pinMode(beep, OUTPUT);
pinMode(flame, INPUT);
Serial.begin(9600);

}

void loop() {
 val=analogRead(flame);
 Serial.print(val);
 if (val>600)
 {
  digitalWrite(beep, HIGH);
 }
 else
  {
  digitalWrite(beep,LOW);  
  }
  delay(500);
}
