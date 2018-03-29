int sensorPin = A0; // select the input pin for the potentiometer
int ledPin = 3; // select the pin for the LED
int sensorValue = 900; // variable to store the value coming from the sensor
 
void setup () 
{
  pinMode (ledPin, OUTPUT);
  Serial.begin (9600);
}
 
void loop () 
{
  sensorValue = analogRead (sensorPin);
  digitalWrite (ledPin, HIGH);
  Serial.println (sensorValue, DEC);
  delay (1000);
  digitalWrite (ledPin, LOW);
  Serial.println (sensorValue, DEC);
  delay (500);
  //Serial.println (sensorValue, DEC);
}
