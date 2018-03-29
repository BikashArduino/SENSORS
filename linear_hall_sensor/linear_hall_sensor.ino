const int hallPin = 8; //the pin of hall sensor attach to 
const int ledPin = 13; //the number of the led
int val = 0; //the variable to store the value read from hall sensor
/********************************/
void setup()
{
  Serial.begin(9600);
pinMode(hallPin,INPUT); //initialize the hall as an input
pinMode(ledPin,OUTPUT); //initialize the led as an output
}
/**********************************/
void loop()
{
val = digitalRead(hallPin); //read the value from hall sensor
if(val == HIGH)
{
digitalWrite(ledPin,LOW);
Serial.println(val, DEC);
//noTone(7);
}
if(val == LOW)
{
digitalWrite(ledPin,HIGH);
Serial.println(val,DEC);
//tone(7,320,500);
}
delay(1000);
}

