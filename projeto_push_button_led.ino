int botao = 7;
int led = 8;
int estadobotao = 0;
void setup (){
	pinMode (botao,INPUT);
}
void loop() {
  estadobotao = digitalRead(botao);
  
  if(estadobotao == HIGH){
  digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
	}
}