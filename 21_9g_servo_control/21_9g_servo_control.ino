int servopin = 9;
int myangle; //angel variable
int pulsewidth; // here we initialize width veriable
int val;

void servopuls(int servopin, int myangle){ //zerro pulse function 
pulsewidth = (myangle*11)+500;
digitalWrite(servopin, HIGH);
delayMicroseconds(pulsewidth);
digitalWrite(servopin, LOW);
delay(20-pulsewidth/1000);
}

void setup() {

  pinMode(servopin, OUTPUT);
  Serial.begin(9600);
  Serial.print("servo=o_serial_simple ready");
}

void loop() {
val=Serial.read();
if(val>='0' && val<='9')
{
  val=val-'0';
  val=val*(180/9);
  Serial.print("moving servo to ");
  Serial.print(val,DEC);
  for(int i=0l; i<=50; i++)
  {
    servopuls(servopin, val);
    }
  }
}
