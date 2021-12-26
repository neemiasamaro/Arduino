#include <LiquidCrystal.h>
LiquidCrystal lcd(5,6,8,9,10,11);
const int azul = 2;
const int verde = 7;
const int vermelho = 3;
int buzzer = 4;
int sensor = A0;
int sensorValor = 0;

void setup(){
	pinMode(azul, OUTPUT);
	pinMode(verde, OUTPUT);
	pinMode(vermelho, OUTPUT);
	pinMode(buzzer, OUTPUT);
	Serial.begin(9600);
	lcd.begin(16,2);
}
void loop(){
  sensorValor=analogRead(sensor);
  Serial.println(sensorValor, DEC);
  if(sensorValor>700)
  {
    digitalWrite(buzzer, HIGH);
    digitalWrite(vermelho, HIGH);
    digitalWrite(azul, LOW);
    digitalWrite(verde, LOW);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("ALERTA");
    delay(800);
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("EVACUAR!!");
    delay(800);  
  }
  else{
    digitalWrite(vermelho, LOW);
    digitalWrite(azul, LOW);
    digitalWrite(verde, HIGH);
    digitalWrite(buzzer, LOW);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("SEGURO");
    delay(800);
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("TUDO NORMAL!");
    delay(800);
  }     
}