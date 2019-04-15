int counter=0;
int decounter=0;
int resultado=0;
int tiempo =1;

void setup() {
 Serial.begin(9600);
}

void loop() {
  counter++;
  Serial.println((String)"El contador es:"+counter);
  delay(1000);
  decounter--;
  Serial.println((String)"El decontador es:"+decounter);
  delay(1000);
 if (counter%3==0){
  resultado = counter-decounter;
   Serial.println((String)"El resultado es:"+resultado);
  
 }
}
