#include <Arduino.h>
#include <ESP8266WiFi.h>

float data = 0;

void setup()
{
  // Open serial communications and wait for port to open:
  Serial.begin(115200);
  while (!Serial)
  {
    Serial.println("Wait for serial port connection"); // wait for serial port to connect. Needed for native USB port only
  }
}

void loop()
{ // run over and over
  if (Serial.available())
  {
    Serial.write(Serial.read());
    
    data = Serial.read();
    
    serial.println(data);
  }
}
