#pragma once

#include <stdio.h>
#include "ElectronicProduct.h"

class Audio : public ElectronicProduct
{
private :
	int volume;
	bool mute;

public:
	Audio();
	void VolumeUp(int value);
	void VolumeDown(int value);
	void Mute();
	int GetVolume();
	virtual void PrintProductStatus();
};