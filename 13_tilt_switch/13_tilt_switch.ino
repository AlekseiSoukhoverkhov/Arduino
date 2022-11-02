void setup() 
{
pinMode(8, OUTPUT);
Serial.begin(9600);
}

void loop() {
int i;
while(1)
  {
  i=analogRead(5);
  if(i>255)
    {
    digitalWrite(8, LOW);
    } 
  else
    {
     digitalWrite(8,HIGH);
     }
     Serial.println(i);
  }
}
