int ledpin=10; // define digital interface 10

void setup() {
 pinMode(ledpin, OUTPUT);
}

void loop() {

  digitalWrite(ledpin,HIGH);
  delay(200);
  digitalWrite(ledpin,LOW);
  delay(500);
  
  digitalWrite(ledpin,HIGH);
  delay(1000);
  digitalWrite(ledpin,LOW);
  delay(1000);

  digitalWrite(ledpin,HIGH);
  delay(1000);
  digitalWrite(ledpin,LOW);
  delay(3000);
}
