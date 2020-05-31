#pragma once
#include "GoodsDecorator.h"

class Orange : public GoodsDecorator
{
private:
	Bill * shopBill;
public:
	Orange(Bill * shopBill);
	std::string GetDescription();
	int Cost();
};