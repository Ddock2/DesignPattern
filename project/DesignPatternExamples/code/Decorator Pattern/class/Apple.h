#pragma once
#include "GoodsDecorator.h"

class Apple : public GoodsDecorator
{
private:
	Bill * shopBill;
public:
	Apple(Bill * shopBill);
	std::string GetDescription();
	int Cost();
};