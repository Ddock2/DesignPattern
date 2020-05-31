#pragma once
#include "GoodsDecorator.h"

class Octopus : public GoodsDecorator
{
private:
	Bill * shopBill;
public:
	Octopus(Bill * shopBill);
	std::string GetDescription();
	int Cost();
};