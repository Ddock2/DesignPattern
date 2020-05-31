#include "Apple.h"

Apple::Apple(Bill* shopBill)
{
	this->shopBill = shopBill;
}

std::string Apple::GetDescription()
{
	return (shopBill->GetDescription() + "���\n\t");
}

int Apple::Cost()
{
	return shopBill->Cost() + 1000;
}