#include "Tuna.h"

Tuna::Tuna(Bill* shopBill)
{
	this->shopBill = shopBill;
}

std::string Tuna::GetDescription()
{
	return (shopBill->GetDescription() + "ÂüÄ¡\n\t");
}

int Tuna::Cost()
{
	return shopBill->Cost() + 5000;
}