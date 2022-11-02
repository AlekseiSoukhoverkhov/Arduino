int sensor(0); //pin for gas sensor
int val; //gas level
int buzzer = 7; //busser pin
int gasmax = 300;// gas level alowed

void setup() {
Serial.begin(9600);
pinMode(buzzer, OUTPUT);
}

void loop() {
val = analogRead(sensor);
Serial.println(val, DEC);
if (val > gasmax){
    digitalWrite(buzzer, HIGH);
  }
  else if (val < gasmax) { 
    digitalWrite(buzzer, LOW);    
  }
delay(1000);

}
