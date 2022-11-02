int potpin=0;
int val=0;

void setup() {
  Serial.begin(9600);
}

void loop() {
val=analogRead(potpin)/2.84;
Serial.println(val);
delay(500);
}
