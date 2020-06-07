#pragma once

#include "PizzaStore.h"
#include "ChicagoCheesePizza.h"
#include "ChicagoPepperoniPizza.h"
#include "PizzaIngredientFactory.h"
#include "ChicagoPizzaIngredientFactory.h"

class ChicagoPizzaStore : public PizzaStore
{
public :
	virtual Pizza* createPizza(const char *type)
	{
		Pizza *pizza = NULL;
		PizzaIngredientFactory *ingredientFactory = new ChicagoPizzaIngredientFactory();

		if (strcmp(type, "cheese") == 0)
		{
			pizza = new ChicagoCheesePizza(ingredientFactory);
		}
		else if (strcmp(type, "pepperoni") == 0)
		{
			pizza = new ChicagoPepperoniPizza(ingredientFactory);
		}

		return pizza;
	};
};