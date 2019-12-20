#include <Wire.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd = LiquidCrystal_I2C (0x27,16,2);

void inLCD(){
  lcd.init();
  lcd.backlight();
}

void textKonstant(String A, int B, int C){
  lcd.setCursor(B,C);
  lcd.print(A);
}

void text(float A, int B, int C, int D){
  lcd.setCursor(B,C);
  lcd.print(A);
  delay(D);
  lcd.clear();
}
