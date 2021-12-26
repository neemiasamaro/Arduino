#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 7, 6, 5, 4);
int PIR=2;

void setup(){
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(PIR, INPUT);
  
}
void loop(){
  int acionamento = digitalRead(PIR);
  if(acionamento==HIGH){
  	lcd.clear();
  	lcd.setCursor(6, 0);
  	lcd.print("Pega");
  	lcd.setCursor(5, 1);
  	lcd.print("Ladrao");
    delay(5000);
  }
  else{
 	lcd.clear();
  	lcd.setCursor(1,0);
  	lcd.print("Sussa, Ninguem");
    delay(5000);
  }
}
