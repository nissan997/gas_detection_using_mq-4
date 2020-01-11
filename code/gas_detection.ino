void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  int gasdata = 0;
  int buzzer = 2;
  int gaspin = A0;
  gasdata = analogRead(gaspin);
  Serial.print("\nGas Sensor Value : ");
  Serial.println(gasdata);
  if (gasdata > 100){
    digitalWrite(buzzer,HIGH);
  }
  else{
    digitalWrite(buzzer,LOW);
  }
  delay(1000);
  

}
