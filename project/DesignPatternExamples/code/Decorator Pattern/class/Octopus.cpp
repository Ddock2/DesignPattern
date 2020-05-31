#include "Octopus.h"

Octopus::Octopus(Bill* shopBill)
{
	this->shopBill = shopBill;
}

std::string Octopus::GetDescription()
{
	return (shopBill->GetDescription() + "¹®¾î\n\t");
}

int Octopus::Cost()
{
	return shopBill->Cost() + 3000;
}