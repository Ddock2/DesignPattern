#pragma once

#include <stdio.h>
#include "interface_.h"
#include "Dough.h"
#include "Sauce.h"
#include "Cheese.h"
#include "Pepperoni.h"

interface_ PizzaIngredientFactory
{
public :
	virtual Dough *createDough() { return NULL; };
	virtual Sauce *createSauce() { return NULL; };
	virtual Cheese *createCheese() { return NULL; };
	virtual Pepperoni *createPepperoni() { return NULL; };
};