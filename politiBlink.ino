//pins til LED. Blå rød blinker når der larmes.
const int redLED = 13;
const int bluLED = 12;


void politiBlink() {
  if (dB>grense){
  for (int i = 0; i < 10; i++)
  {
    digitalWrite(redLED, HIGH);
    delay(300);
    digitalWrite(redLED, LOW);
    digitalWrite(bluLED, HIGH);
    delay(300);
    digitalWrite(bluLED, LOW);
  }
}}
