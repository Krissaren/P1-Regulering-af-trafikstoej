//Variabler der skal bruges i flere dokumenter
//dag / nat decibelgrænse.
int dag = 85;//dag og nat bliver brugt til at definere decibelgrænsen under knappen.
int nat = 80;
int grense = dag; //hvilken værdi den skal starte med.
float dB;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //mikrofon setup
  pinMode(A1, INPUT);
  inLCD();

}
void loop() {
  // put your main code here, to run repeatedly:
  //dagNatKnap();  

  dagNatKnap();
  if (afstandRaw() < 100){
    lydMaaling();
    if( dB > grense){
      politiBlink();
    } 
    resetArray();
  }
}
