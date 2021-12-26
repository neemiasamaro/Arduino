void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(4600);
  pinMode(2, OUTPUT);
}
void loop(){
  while(1==1){
    Serial.println(analogRead(A0));
    if(analogRead(A0) < 500){
      digitalWrite(2, HIGH);
    } else{
      digitalWrite(2, LOW);
    }
  }
}
      
  
