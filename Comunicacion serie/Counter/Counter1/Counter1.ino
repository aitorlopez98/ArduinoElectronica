int counter=0;
int decounter=0;
void setup() {

 Serial.begin(9600);
  

}

void loop() {
  Serial.println((String)"El contador es:"+counter);
  counter++;
  delay(1000);
    Serial.println((String)"El decontador es:"+decounter);
 decounter--;
  delay(1000);
 

}
