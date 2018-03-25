
/* BUZZER PIN
 (-)  - GND
 (+)-MIDDLE- 5V
 (S)- D6
*/

int buzzer = 11;//the pin of the active buzzer
void setup()
{
pinMode(buzzer,OUTPUT);//initialize the buzzer pin as an output
}
void loop()
{


digitalWrite(buzzer,HIGH);
delay(50);//wait for 50ms
digitalWrite(buzzer,LOW);
delay(50);//wait for 50ms



}

