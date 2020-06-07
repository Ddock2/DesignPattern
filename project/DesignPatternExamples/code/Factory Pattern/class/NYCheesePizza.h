#pragma once

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class NYCheesePizza : public Pizza
{
public :
	PizzaIngredientFactory *ingredientFactory;

	NYCheesePizza(PizzaIngredientFactory *ingredientFactory)
	{
		strcpy(this->name, "NY Style Cheese Pizza");
		this->ingredientFactory = ingredientFactory;
	};

	virtual void prepare()
	{
		this->dough = ingredientFactory->createDough();
		this->sauce = ingredientFactory->createSauce();
		this->cheese = ingredientFactory->createCheese();
	};
};