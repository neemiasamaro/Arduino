int botao = 7;
int estadobotao = 0;
void setup (){
	pinMode (botao,INPUT);
	Serial.begin(9600);
}
void loop() {
  estadobotao = digitalRead(botao);
  
  if(estadobotao == HIGH) {
  Serial.println("Pressionado");
  }
  else{
    Serial.println("Nao Pressionado");
	}
}