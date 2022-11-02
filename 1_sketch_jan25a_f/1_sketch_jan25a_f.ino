int ledpin=13; // define digital interface 10

void setup() {
 pinMode(ledpin, OUTPUT);
}

void loop() {

  digitalWrite(ledpin,HIGH);
  delay(5000);
  digitalWrite(ledpin,LOW);
  delay(5000);
}
