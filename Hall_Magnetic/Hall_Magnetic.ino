/* 
Pin - = GND, connect to GND of the Arduino
Pin (middle pin) +5 v, connect to Arduino +5
Pin S signal, connect to Arduino Digital pin 7
Power consumption, 3 mA in rest, 8 mA when switched on

*/

int Led = 13 ; // define LED Interface
int SENSOR = 7 ; // define the Hall magnetic sensor interface
int val ; // define numeric variables val
 
void setup ()
{
  pinMode (Led, OUTPUT) ;    // define LED as output interface
  pinMode (SENSOR, INPUT) ;  // define the Hall magnetic sensor line as input
}
 
void loop ()
{
  val = digitalRead (SENSOR) ; // read sensor line
  if (val == LOW) // when the Hall sensor detects a magnetic field, Arduino LED lights up
  {
    digitalWrite (Led, HIGH);
  }
  else
  {
    digitalWrite (Led, LOW);
  }
}
