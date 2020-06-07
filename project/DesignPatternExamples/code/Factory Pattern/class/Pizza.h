#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include "interface_.h"
#include "Dough.h"
#include "Sauce.h"
#include "Cheese.h"
#include "Pepperoni.h"

using namespace std;

interface_ Pizza
{
public :
	char name[1024];
	Dough *dough;
	Sauce *sauce;
	Cheese *cheese;
	Pepperoni *pepperoni;

	virtual void prepare() {};
	void bake() { cout << "bake() : Bake for 25 minutes at 350" << endl; };
	void cut() { cout << "cut() : Cutting the pizza into diagonal slices" << endl; };
	void box() { cout << "box() : Place pizza in official PizzaaStore box" << endl; };
	char *getName() { return this->name; };
};