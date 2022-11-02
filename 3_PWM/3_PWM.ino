int potpin=0; //initialisation of the analog pin 0
int ledpin =11; // PWM output
int val=0; // initial value of the sensor

void setup() {
  pinMode(ledpin, OUTPUT); //define pin 11 as the output
  Serial.begin(9600);

}

void loop() {
  val=analogRead(potpin); //read the value of the sensor
  Serial.println(val);
  analogWrite(ledpin, val/4);
  delay(10);
}
