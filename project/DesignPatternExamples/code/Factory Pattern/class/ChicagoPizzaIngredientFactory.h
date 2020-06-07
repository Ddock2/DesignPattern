#pragma once

#include <stdio.h>
#include "interface_.h"
#include "PizzaIngredientFactory.h"
#include "ThickCrustDough.h"
#include "MozzarellaCheese.h"
#include "PlumTomatoSauce.h"
#include "ItalianPepperoni.h"

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory
{
public :
	virtual Dough *createDough() { return new ThickCrustDough(); };
	virtual Sauce *createSauce() { return new PlumTomatoSauce(); };
	virtual Cheese *createCheese() { return new MozzarellaCheese(); };
	virtual Pepperoni *createPepperoni() { return new ItalianPepperoni(); };
};