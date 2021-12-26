#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 7, 6, 5, 4);
int buzzer = 8;
int sensor = A0;
int sensorValor = 0;

void setup(){
  pinMode(buzzer, OUTPUT);
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop(){

  sensorValor=analogRead(sensor);

  Serial.println(sensorValor, DEC);

  if(sensorValor > 800){
    digitalWrite(buzzer, HIGH);
    lcd.clear();
      lcd.setCursor(4, 0);
      lcd.print("Cuidado");
      lcd.setCursor(5, 1);
      lcd.print("Fogo!");
    delay(1000);
  }
  else{
    digitalWrite(buzzer, LOW);
    lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Sussa, Tranquilo");
    delay(1000);
  }
}