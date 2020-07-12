#pragma once

#include <stdio.h>
#include "CaffeineBeverageWithHook.h"

class Tea : public CaffeineBeverageWithHook
{
public:
	bool addFlag = true;

	virtual void Brew() { printf("Steep tea bag\n"); }
	virtual void AddCondiments() { printf("Add Lemon\n"); }
	virtual bool CustomWantsCondiments() { return addFlag; } // hook
};