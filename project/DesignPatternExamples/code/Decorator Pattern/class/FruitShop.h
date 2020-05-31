#pragma once
#include "Bill.h"

class FruitShop : public Bill
{
public:
	FruitShop();
	virtual std::string GetDescription();
	virtual int Cost();
};