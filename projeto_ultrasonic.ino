#define pinoTrig 3
#define pinoEcho 4
 
float distancia;

void Leitura();

void setup(){
  Serial.begin(9600);
  pinMode(pinoTrig, OUTPUT);
  pinMode(pinoEcho, INPUT);
  digitalWrite(pinoTrig, LOW);
}

void loop(){
  leitura();
  
  distancia=distancia/2;
  distancia=distancia*0.034029;
  Serial.print("Distancia em cm: ");
  Serial.println(distancia);
  
  delay(1000);
}

void leitura(){
  digitalWrite(pinoTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinoTrig, LOW);
  
  distancia = pulseIn(pinoEcho, HIGH);
}
  