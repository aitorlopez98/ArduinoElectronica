// constants won't change. They're used here to set pin numbers:
const int buttonPin = 4; // the number of the pushbutton pin
const int ledPin = 5; // the number of the LED pin
const int buttonPin1 = 2;
const int ledPinrojo = 3;
const int ledPinverde = 12;
// variables will change:
int buttonState = 0; // variable for reading the pushbutton status
int buttonState1 = 0;
void setup() {
pinMode(ledPin, OUTPUT); // initialize the LED pin as an output
pinMode(buttonPin, INPUT); // initialize the pushbutton pin as an input
pinMode(buttonPin1, INPUT); // initialize the pushbutton pin as an input
pinMode(ledPinrojo, OUTPUT);
pinMode(ledPinverde, OUTPUT);
}
void loop() {
buttonState = digitalRead(buttonPin); // read the state of the pushbutton
buttonState1 = digitalRead(buttonPin1); // read the state of the pushbutton
if(buttonState == 1 and ledPin == 0){
  digitalWrite(ledPin, HIGH);
}
if(buttonState == 1 and ledPin == 1){
  digitalWrite(ledPin, LOW);
}
}
