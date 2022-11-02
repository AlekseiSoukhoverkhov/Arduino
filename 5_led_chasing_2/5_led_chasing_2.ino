int BASE=2;
int NUM=6;

void setup() {
for(int i=BASE; i<BASE+NUM; i++)
  {
    digitalWrite(i,OUTPUT);
  }
}

void loop() {
for(int i=BASE; i<BASE+NUM; i++)
  {
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i,LOW);
    delay(200);
  }
}
