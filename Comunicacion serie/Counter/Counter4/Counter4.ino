double counter=0;
double resultado=0;

void setup() {
 Serial.begin(9600);
}

void loop() {
  counter++;
  Serial.println((String)"El contador es:"+counter);
  delay(1000);
  resultado=counter/3;
  Serial.println((String)"El resultado es:"+resultado);
  
 
}
