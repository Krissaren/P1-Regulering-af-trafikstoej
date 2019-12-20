const long maxMeasurements = 400;
float myMeasurements[maxMeasurements ];


int maxIndex = 0;
float maxValue = myMeasurements[maxIndex];
float Spaending;
float Tryk;

float dBOmregning(float A) {
  Spaending = ( (A * 4.887585533) / 57.5);
  Tryk = (Spaending / 7.93);
  dB = (20 * log10(Tryk / 0.00002));
  return dB;
}

void lydMaaling(){
for (long i = 1; i < maxMeasurements; i++) {
  myMeasurements[i] = analogRead(A1);
  Serial.print(i); Serial.print(" "); Serial.println(myMeasurements[i]);}
  for (long i = 1; i < maxMeasurements; i++)
  {
    if (myMeasurements[i] > maxValue) {
      maxValue = myMeasurements[i];
      maxIndex = i;
    }
  }



  Serial.println("   ");

  dBOmregning(maxValue);


  Serial.print("Raw"); Serial.print(" "); Serial.println(maxValue);
  Serial.print("Decibel"); Serial.print(" "); Serial.println(dB);
  text(dB, 10, 1, 2000);
}

void resetArray(){
  memset(myMeasurements,0,sizeof(myMeasurements));
  maxValue = 0;
}
