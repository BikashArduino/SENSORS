int sensorPin = A0;   // select the analog input pin for the photoresistor
int threshold = 800;  // analog input trigger level from photoresistor
int sensorValue = 0;  // photoresistor value read from analog input pin
int Led = 13;

void setup() {
  pinMode(Led, OUTPUT); // built-in LED, usually on pin 13
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(sensorPin);
  if (value < threshold) {
    // low light, so switch the light (LED) on
    digitalWrite(Led, HIGH);
    Serial.println(value);
  }
  else {
    // light level high enough, so switch the light (LED) off
    digitalWrite(Led, LOW);
     Serial.println(value);
  }
  // wait for ADC to settle before next reading
  delay(200);
}
