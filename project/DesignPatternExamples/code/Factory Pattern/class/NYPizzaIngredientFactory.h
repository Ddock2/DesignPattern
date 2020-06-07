#pragma once

#include <stdio.h>
#include "interface_.h"
#include "PizzaIngredientFactory.h"
#include "ThinCrustDough.h"
#include "ReggianoCheese.h"
#include "MarinaraSauce.h"
#include "NYPepperoni.h"

class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
public :
	virtual Dough *createDough() { return new ThinCrustDough(); };
	virtual Sauce *createSauce() { return new MarinaraSauce(); };
	virtual Cheese *createCheese() { return new ReggianoCheese(); };
	virtual Pepperoni *createPepperoni() { return new NYPepperoni(); };
};