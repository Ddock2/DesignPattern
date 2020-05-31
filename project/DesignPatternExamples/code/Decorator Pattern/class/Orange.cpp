#include "Orange.h"

Orange::Orange(Bill* shopBill)
{
	this->shopBill = shopBill;
}

std::string Orange::GetDescription()
{
	return (shopBill->GetDescription() + "¿À·»Áö\n\t");
}

int Orange::Cost()
{
	return shopBill->Cost() + 2000;
}