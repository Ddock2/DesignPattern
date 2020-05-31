#pragma once
#include "Bill.h"

class FishShop : public Bill
{
public:
	FishShop();
	virtual std::string GetDescription();
	virtual int Cost();
};