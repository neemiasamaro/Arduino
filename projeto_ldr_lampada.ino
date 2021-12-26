void setup(){
  pinMode(A0, INPUT);
  Serial.begin(4600);
  pinMode(9, OUTPUT);
}
void loop(){
    Serial.println(analogRead(A0));
    if(analogRead(A0)<500){
      digitalWrite(9, HIGH);
    }else{
      digitalWrite(9, LOW);
  }
}
      
  
