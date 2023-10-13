// C++ code
void setup()
{
  // LEB_BUILTIN is pin 13 by default
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // Turn the LED On.
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  
  // Turn the LED Off.
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}