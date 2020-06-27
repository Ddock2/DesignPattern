#pragma once

#include <stdio.h>

class ElectronicProduct
{
protected :
	bool powerStatus;

public:
	ElectronicProduct();
	void PowerOn();
	void PowerOff();
	bool GetPowerStatus();
	virtual void PrintProductStatus() {};
};