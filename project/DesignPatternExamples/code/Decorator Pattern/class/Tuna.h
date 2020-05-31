#pragma once
#include "GoodsDecorator.h"

class Tuna : public GoodsDecorator
{
private:
	Bill * shopBill;
public:
	Tuna(Bill * shopBill);
	std::string GetDescription();
	int Cost();
};