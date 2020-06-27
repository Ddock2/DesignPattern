#include "ElectronicProduct.h"

ElectronicProduct::ElectronicProduct()
{
	powerStatus = false;
}

void ElectronicProduct::PowerOn()
{
	powerStatus = true;
}

void ElectronicProduct::PowerOff()
{
	powerStatus = false;
}

bool ElectronicProduct::GetPowerStatus()
{
	return powerStatus;
}
