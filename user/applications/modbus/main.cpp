#include "application.h"

SYSTEM_MODE(MANUAL);

void setup()
{
}

void loop()
{
	Serial.begin(115200);
	Serial.println("Hello World!");
	delay(1000);
}
