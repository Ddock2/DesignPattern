#pragma once

#include <stdio.h>

class Amplifier
{
public:
	void On() { printf("amp on\n"); }
	void Off() { printf("amp off\n"); }
	void SetDvd() { printf("amp set dvd\n"); }
	void SetTv() { printf("amp set TV\n"); }
	void SetStreoSound() { printf("amp set stereo sound\n"); }
	void SetSurroundSound() { printf("amp set surround sound\n"); }
	void SetVolume(int value) { printf("amp set volume %d\n", value); }
};