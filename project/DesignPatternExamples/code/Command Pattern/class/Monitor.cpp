#include "Monitor.h"

Monitor::Monitor()
{
	powerStatus = false;
	brightness = 80;
}

void Monitor::BrightnessUp(int value)
{
	brightness += value;

	if (brightness > 100)
	{
		brightness = 100;
	}
}

void Monitor::BrightnessDown(int value)
{
	brightness -= value;

	if (brightness < 0)
	{
		brightness = 0;
	}
}

int Monitor::GetBrightness()
{
	return brightness;
}

void Monitor::PrintProductStatus()
{
	printf("< Monitor status >\n");
	printf("    power      : %s\n", this->powerStatus ? "on" : "off");
	printf("    brightness : %d\n\n", this->brightness);
}

