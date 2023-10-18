// C++ code
//These constants won't change. They are used to give names to the pins used.
const int analogInpin=A0; //Analog pin that the potentiometer is attached to.
const int analogOutpin=9; //Analog output pin that the LED is attached to.

int sensor_value=0;//Value read from the Potentiometer.
int output_value=0;//Value output to the PVM(analog output).
void setup()
{
  
  Serial.begin(9600);
}

void loop()
{
    //Read the analog in value from potentiometer
	int sensor_value=analogRead(A0);
    //Map it to the range of the analog output(0-255)
    output_value=map(sensor_value,0,1023,0,255);
    //Change the analog output values
    analogWrite(analogOutpin,output_value);
  
    //Print the results to the serial monitor.
    Serial.print("Sensor value:");
  	Serial.print(sensor_value);
  	Serial.print("\t Output value");
 	Serial.print(output_value);
  	// Wait for 2 milliseconds before the next loop for the 
    // analog-to-digital convertor(ADC) to settle after the last reading.
  	delay(2);
}