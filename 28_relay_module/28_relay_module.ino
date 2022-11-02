int relay = 8;
int controlLamp = 13;

void setup() {
pinMode(controlLamp, OUTPUT);
digitalWrite(controlLamp, HIGH);
pinMode(relay, OUTPUT);
}

void loop() {
digitalWrite(relay, HIGH);
delay(2000);
digitalWrite(relay, LOW);
delay(2000);
}
