int joystick_x = 0;
int joystick_y = 1;
int joystick_z = 3;

void setup() {
  pinMode(joystick_z, INPUT);
  Serial.begin(9600);
}

void loop() {
int x,y,z;
x = analogRead(joystick_x);
y = analogRead(joystick_y);
z = analogRead(joystick_z);
Serial.print(x, DEC);
Serial.print(", " );
Serial.print(y, DEC);
Serial.print(", " );
Serial.println(z, DEC);
delay(100);
}
