#pragma once

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class NYPepperoniPizza : public Pizza
{
public:
	PizzaIngredientFactory *ingredientFactory;

	NYPepperoniPizza(PizzaIngredientFactory *ingredientFactory)
	{
		strcpy(this->name, "NY Style Pepperoni Pizza");
		this->ingredientFactory = ingredientFactory;
	};

	virtual void prepare()
	{
		this->dough = ingredientFactory->createDough();
		this->sauce = ingredientFactory->createSauce();
		this->pepperoni = ingredientFactory->createPepperoni();
	};
};