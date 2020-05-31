#pragma once
#include "Bill.h"

class GoodsDecorator : public Bill
{
public:
	virtual std::string GetDescription();
};