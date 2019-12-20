//gul og grøn skal indikere om der er valgt nat- eller aften dBLimit.
const int yelLED = 11;
const int greLED = 10;
int groenGul = 0;
//definerer knap til aftan/nat.
const int knapPin = 2;

void dagNatKnap() {
  //boolean knapState = digitalRead(knapPin);
  delay(0);
  //Dagen starter med at være grøn
  if (digitalRead(knapPin) == 1 && groenGul == 0) {
    groenGul = 1;
    grense = nat;
    delay(2000);
  }

  if (digitalRead(knapPin) == 1 && groenGul == 1) {
    groenGul = 0;
    grense = dag;
    delay(2000);
  }

  if (groenGul == 0) {
    digitalWrite(greLED, HIGH);
    digitalWrite(yelLED, LOW);
  }
  //rammes knappen skal der være nat
  if (groenGul == 1) {
    // turn LED on / old off
    digitalWrite(greLED, LOW);
    digitalWrite(yelLED, HIGH);
  }
  //Serial.println(digitalRead(knapPin));
  //Serial.println(groenGul);
}
