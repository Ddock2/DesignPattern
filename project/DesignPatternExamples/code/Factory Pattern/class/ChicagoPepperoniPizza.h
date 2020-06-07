#pragma once

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class ChicagoPepperoniPizza : public Pizza
{
public:
	PizzaIngredientFactory *ingredientFactory;

	ChicagoPepperoniPizza(PizzaIngredientFactory *ingredientFactory)
	{
		strcpy(this->name, "Chicago Style Pepperoni Pizza");
		this->ingredientFactory = ingredientFactory;
	};

	virtual void prepare()
	{
		this->dough = ingredientFactory->createDough();
		this->sauce = ingredientFactory->createSauce();
		this->pepperoni = ingredientFactory->createPepperoni();
	};
};