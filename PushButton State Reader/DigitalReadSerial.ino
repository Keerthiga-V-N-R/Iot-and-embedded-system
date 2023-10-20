/*
  DigitalReadSerial

  This Arduino example reads the state of a push button connected to digital pin 2 and prints the result to the Serial Monitor.

*/

// Define the digital pin where the pushbutton is connected:
int pushButton = 2;

// The setup routine runs once when the Arduino is powered on or reset:
void setup() {
  // Initialize serial communication at 9600 baud:
  Serial.begin(9600);
  // Set the pushbutton's pin as an input:
  pinMode(pushButton, INPUT);
}

// The loop routine runs repeatedly as long as the Arduino is powered on:
void loop() {
  // Read the input pin to check the state of the pushbutton:
  int buttonState = digitalRead(pushButton);
  // Print out the state of the button (HIGH or LOW) to the Serial Monitor:
  Serial.println(buttonState);
  // Add a small delay between reads for stability:
  delay(1);
}

