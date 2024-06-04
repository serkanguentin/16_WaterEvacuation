int sensorPin = A0;                 
int limitDeger = 250;               
int relayPin = 13;                   
int veri;                           
void setup() {
pinMode(relayPin, OUTPUT);          
}
void loop() {
  
veri = analogRead(sensorPin);     

if (veri > limitDeger) { 
digitalWrite(relayPin, HIGH);
}
 else {
digitalWrite(relayPin, LOW);
}
}