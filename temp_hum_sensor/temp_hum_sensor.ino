#include <dht.h>

 dht DHT;

#define DHT11_PIN 7
int pinOut = 8;

void setup(){
  Serial.begin(9600);
  pinMode(8, OUTPUT);
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  if (DHT.humidity <= 63){
    digitalWrite(pinOut, HIGH);
  }
  else {
    digitalWrite(pinOut, LOW);
  }
  delay(5000);            
}

