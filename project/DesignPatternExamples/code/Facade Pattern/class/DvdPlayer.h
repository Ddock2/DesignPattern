#pragma once

#include <stdio.h>

class DvdPlayer
{
public:
	void On() { printf("dvd on\n"); }
	void Off() { printf("dvd off\n"); }
	void Eject() { printf("dvd eject\n"); }
	void Pause() { printf("dvd pause\n"); }
	void Play(const char * target) { printf("dvd play %s\n", target); }
	void SetSurroundAudio() { printf("dvd set surround audio\n"); }
	void SetTwoChannelAudio() { printf("dvd set two channel audio\n"); }
	void Stop() { printf("dvd stop\n"); }
};