int ledpin=11;
int inpin=7;
int val;
int check=-1;

void setup() {
pinMode(ledpin, OUTPUT);
pinMode(inpin, INPUT);
}

void loop() {
val=digitalRead(inpin);
if (val==HIGH){
  check=-check;
  delay(10);
}
if (check==1)
{
digitalWrite(ledpin, HIGH);
}
else
{
  digitalWrite(ledpin, LOW);
}

}
