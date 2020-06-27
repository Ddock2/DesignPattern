#include "Audio.h"

Audio::Audio()
{
	powerStatus = false;
	volume = 10;
	mute = false;
}

void Audio::VolumeUp(int value)
{
	volume += value;

	if (volume > 100)
	{
		volume = 100;
	}
}

void Audio::VolumeDown(int value)
{
	volume -= value;

	if (volume < 0)
	{
		volume = 0;
	}
}

void Audio::Mute()
{
	mute = !mute;
}

int Audio::GetVolume()
{
	if (mute)
	{
		return -1;
	}
	else
	{
		return volume;
	}
}

void Audio::PrintProductStatus()
{
	printf("< Audio status >\n");
	printf("    power  : %s\n", this->powerStatus ? "on" : "off");
	printf("    volume : %d\n", this->volume);
	printf("    mute   : %s\n\n", this->mute ? "on" : "off");
}

