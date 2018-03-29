
/*
   (-)= GND
   Middle= +5V
   (S)= D7
 */


const int hallPin = 7;     // hall effect sensor out pin
const int ledPin =  13;    // LED pin

int hallState = 0;         // Initial hall sensor status

void setup() {

  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT); // LED pin as an output     
  
  pinMode(hallPin, INPUT); // The hall effect sensor pin as an input   
}

void loop(){
  
  hallState = digitalRead(hallPin); // reading the state of the hall effect sensor pin

  if (hallState == LOW) {     
    
    digitalWrite(ledPin, HIGH);  // turn LED on 
    Serial.println(hallState);    
  } 
  else {
    
    digitalWrite(ledPin, LOW);  // turn LED off
    Serial.println(hallState); 
  }
}

