

byte sensorPin = 3;
byte indicator = 13;
int buzzer = 8;
void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(indicator, OUTPUT);
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  byte state = digitalRead(sensorPin);
  digitalWrite(indicator, state);
  if (state == 1){
    Serial.println("Somebody is in the erea!");
    digitalWrite(buzzer, HIGH);
  }
  else if (state == 0) { 
    Serial.println ("No one!");
    digitalWrite(buzzer, LOW);    
  }
  delay(5000);

}
