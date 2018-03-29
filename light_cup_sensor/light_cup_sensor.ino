int Led1 = 13 ;
int Led2 = 3;// Declaration of the LED-output pin
int Sensor = 7; // Declaration of the sensor input pin
int val; // Temporary variable
  
void setup ()
{
  Serial.begin(9600);
  pinMode (Led1, OUTPUT) ; // Initialization output pin
  pinMode (Led2, OUTPUT) ;
  pinMode (Sensor, INPUT) ; // Initialization sensor pin
  digitalWrite(Sensor, HIGH); // Activating of the internal pull-up resistor
}
  
void loop ()
{
  val = digitalRead (Sensor) ; // The current signal from the sensor will be read
  
  if (val == HIGH) // If a signal will be detected, the LED will light up.
  {
    digitalWrite (Led1, LOW);
    digitalWrite (Led2, LOW);
    Serial.println(val);
  }
  else
  {
    digitalWrite (Led1, HIGH);
     digitalWrite (Led2, HIGH);
     Serial.println(val);
  }
}
