int buzzer=3;
int notelenth=1000;

void setup() {
pinMode(buzzer, OUTPUT);
}

void loop() {
tone(buzzer, 262, notelenth);
delay(notelenth);
noTone(buzzer);
tone(buzzer, 294, notelenth);
delay(notelenth);
noTone(buzzer);
tone(buzzer, 330, notelenth);
delay(notelenth);
noTone(buzzer);
tone(buzzer, 349, notelenth);
delay(notelenth);
noTone(buzzer);
tone(buzzer, 391, notelenth);
delay(notelenth);
noTone(buzzer);
tone(buzzer, 440, notelenth);
delay(notelenth);
noTone(buzzer);
tone(buzzer, 494, notelenth);
delay(notelenth);
noTone(buzzer);
tone(buzzer, 523, notelenth);
delay(notelenth);
noTone(buzzer);
delay(notelenth);

}
