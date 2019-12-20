const int trigPin = 9;            //U-lyd trigger
const int echoPin = 8;            //U-lyd input
long duration, cm;

void afgivLyd() {
  //bruger 10 ms på at afsende bølger
  //venter inden afsendelse for at mindske forstyrrelser
  //fra tidligere udsendte bølger
  //se rapport, afsnit om afstandssensor
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
}

void modtagLyd() {
  //modtager lyden.
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
}

void konverter() {
  //omregner tid til distance.
  cm = (duration / 2) * 0.0343;
  // ganger med 0.0343 for at omrenge fra cm/microsekund til cm.
}



void printResultat() {
  //debugging; printer resultatet af maalinger.
  Serial.print(cm);
  Serial.println("cm");
}

int afstandRaw() {
  afgivLyd(),
  modtagLyd();
  konverter();
  return cm;
}

void afstand() {
  afgivLyd();
  modtagLyd();
  konverter();
  printResultat();
}
/*
int maalingBil() {
  if (cm < decibelGraense) {
    politiBlink();
  }
}*/
