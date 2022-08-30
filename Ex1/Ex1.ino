//configure pins here using precompiled defines
#define LED_PIN   13

//called once at startup to configure the hardware
void setup() 
{
  //Make LED PIN an output
  pinMode(LED_PIN, OUTPUT);
}

//called over and over forever. Run your processing here.
void loop() 
{
  digitalWrite(LED_PIN, HIGH);
  delay(2);
  digitalWrite(LED_PIN, LOW);
  delay(2);
}
