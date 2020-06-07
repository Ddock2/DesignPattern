#pragma once

#include "Pepperoni.h"

class ItalianPepperoni : public Pepperoni
{
public:
	ItalianPepperoni() { strcpy(this->name, "ItalianPepperoni"); };
};