#pragma once

#include <stdio.h>
#include "ElectronicProduct.h"

class Monitor : public ElectronicProduct
{
private :
	int brightness;
public:
	Monitor();
	void BrightnessUp(int value);
	void BrightnessDown(int value);
	int GetBrightness();
	virtual void PrintProductStatus();
};