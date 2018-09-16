
 // Define hardware connections
#define PIN_ANALOG_IN A0

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int value;
  value = analogRead(PIN_ANALOG_IN);
  Serial.print("Envelope:");
  Serial.println("Envelope:");
  delay(500);
}
