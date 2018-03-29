/*SOUND SENSOR
  A0 = not connected
  G = GND
  + = 5V
  D0 = D7
*/
/* RELAY
 - = GND
 + = 5V
 S = D12
*/


int soundSensor = 0;
int LED1 = 3;
int LED2 = 9;
int LED3 = 10;
int LED4 = 11;
int LED5 = 12;
//int pinOut = 12;


void setup() 
{

  pinMode (soundSensor, INPUT);
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);
  pinMode (LED4, OUTPUT);
  pinMode (LED5, OUTPUT);
 // pinMode(pinOut, OUTPUT);
  
   Serial.begin(9600);
}

void loop()
{
  int statusSensor = digitalRead (soundSensor);
  
  if (statusSensor == 1)
  {

    
    /*delay(150);
    digitalWrite(pinOut, HIGH);
    Serial.println(statusSensor);
    */
    digitalWrite(LED1, HIGH);
    Serial.println(statusSensor);
    delay(50);
    digitalWrite(LED2, HIGH);
    Serial.println(statusSensor);
    delay(50);
    digitalWrite(LED3, HIGH);
    Serial.println(statusSensor);
    delay(50);
    digitalWrite(LED4, HIGH);
    Serial.println(statusSensor);
    delay(50);
    digitalWrite(LED5, HIGH);
    Serial.println(statusSensor);
    delay(50);
  }
  
  else
  {
   
    //digitalWrite(pinOut, LOW);
    digitalWrite(LED1, LOW);
     digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
       digitalWrite(LED4, LOW);
       digitalWrite(LED5, LOW);
  }
  
}
