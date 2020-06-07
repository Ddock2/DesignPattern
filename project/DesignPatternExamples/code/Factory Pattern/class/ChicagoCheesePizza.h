#pragma once

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class ChicagoCheesePizza : public Pizza
{
public :
	PizzaIngredientFactory *ingredientFactory;

	ChicagoCheesePizza(PizzaIngredientFactory *ingredientFactory)
	{
		strcpy(this->name, "Chicago Style Cheese Pizza");
		this->ingredientFactory = ingredientFactory;
	};

	virtual void prepare()
	{
		this->dough = ingredientFactory->createDough();
		this->sauce = ingredientFactory->createSauce();
		this->cheese = ingredientFactory->createCheese();
	};
};