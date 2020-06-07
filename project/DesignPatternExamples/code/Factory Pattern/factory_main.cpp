#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include "factory_main.h"

int main()
{
	Pizza *pizza = NULL;
	PizzaStore *pizzaStore = NULL;
	
	pizzaStore = new NYPizzaStore();
	pizza = pizzaStore->orderPizza("cheese");
	printf("--- pizza : %s ---\n", pizza->getName());
	pizza->dough->printName();
	pizza->sauce->printName();
	pizza->cheese->printName();

	delete(pizza);
	delete(pizzaStore);

	printf("\n----------------------------------------------------------------\n");

	pizzaStore = new ChicagoPizzaStore();
	pizza = pizzaStore->orderPizza("pepperoni");
	printf("--- pizza : %s ---\n", pizza->getName());
	pizza->dough->printName();
	pizza->sauce->printName();
	pizza->pepperoni->printName();

	delete(pizza);
	delete(pizzaStore);

	return 0;
}