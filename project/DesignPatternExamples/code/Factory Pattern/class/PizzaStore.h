#pragma once

#define interface_ class
#include <iostream>
#include "Pizza.h"

interface_ PizzaStore
{
public :
	Pizza *orderPizza(const char *type)
	{
		Pizza *pizza = createPizza(type);

		if (pizza != NULL)
		{
			pizza->prepare();
			pizza->bake();
			pizza->cut();
			pizza->box();
		}
		else
		{
			printf("not found \"%s\" in menu", type);
		}

		return pizza;
	};

	virtual Pizza* createPizza(const char *type) { return NULL; };
};