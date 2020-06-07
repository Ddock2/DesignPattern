#pragma once

#include "PizzaStore.h"
#include "NYCheesePizza.h"
#include "NYPepperoniPizza.h"
#include "PizzaIngredientFactory.h"
#include "NYPizzaIngredientFactory.h"

class NYPizzaStore : public PizzaStore
{
public :
	virtual Pizza* createPizza(const char *type)
	{
		Pizza *pizza = NULL;
		PizzaIngredientFactory *ingredientFactory = new NYPizzaIngredientFactory();

		if (strcmp(type, "cheese") == 0)
		{
			pizza = new NYCheesePizza(ingredientFactory);
		}
		else if (strcmp(type, "pepperoni") == 0)
		{
			pizza = new NYPepperoniPizza(ingredientFactory);
		}

		return pizza;
	};
};