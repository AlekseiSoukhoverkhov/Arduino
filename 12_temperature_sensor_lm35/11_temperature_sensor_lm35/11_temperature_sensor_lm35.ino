int potpin=0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  int val;
  int dat;
  val=analogRead(0);
  dat=(125*val)>>8;
  Serial.print("Temp: ");
  Serial.print(dat);
  Serial.print("C\n");
  delay(500);

}
