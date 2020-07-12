#pragma once

#include <stdio.h>

class CaffeineBeverageWithHook
{
public:
	void PrepareRecipe()
	{
		BoilWater();
		Brew();
		PourInCup();
		if (CustomWantsCondiments())
		{
			AddCondiments();
		}
	}

	virtual void Brew() {}
	virtual void AddCondiments() {}

	void BoilWater() { printf("Boil water\n"); }
	void PourInCup() { printf("Pour in cup\n"); }

	virtual bool CustomWantsCondiments() { return true; } // hook
};