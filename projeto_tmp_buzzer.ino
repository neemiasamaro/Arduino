int t=5;
void setup(){
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  float tempc = ((analogRead(A0)*(5.0/1024))-0.5)/0.01;
  float tempf = (tempc * 9/5)+32;
  if((tempc > 30)||(tempc <-10)){
    for(int f=500;f<=600;f++){
    tone(7,f,t);
    }
  }
                   
 	Serial.print("Celsius:");
 	Serial.print(tempc);
 	Serial.print(" ºC");
 	Serial.print("Fahrenheit: ");
 	Serial.print(tempf);
 	Serial.println(" ºF");
 	delay(1000);
}