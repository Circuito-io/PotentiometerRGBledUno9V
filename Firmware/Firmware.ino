#include "Global.h"

void setup() 
{
	
	Serial.begin(9600);
	Serial.println("start");
  
}

void loop() 
{	
	int sample = map(potentiometer.read(),0,1023,0,255);
	
	led.setRGB(sample,0,0);
	delay(100);
	led.setRGB(0,sample,0);
	delay(100);
	led.setRGB(0,0,sample);
	delay(100);
  
}
