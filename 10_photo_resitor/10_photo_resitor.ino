int potpin=0; //Photoresisor
int ledpin=11; //Ledlight
int val=0; //Light data

void setup() {
pinMode(ledpin, OUTPUT);
Serial.begin(9600);
}

void loop() {
val=analogRead(potpin);
Serial.println(val);
analogWrite(ledpin, val);
delay(10);
}
