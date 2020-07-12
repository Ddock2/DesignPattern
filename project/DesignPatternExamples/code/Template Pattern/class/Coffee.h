#pragma once

#include <stdio.h>
#include "CaffeineBeverageWithHook.h"

class Coffee : public CaffeineBeverageWithHook
{
public:
	bool addFlag = true;

	virtual void Brew() { printf("Brew coffee\n"); }
	virtual void AddCondiments() { printf("Add sugar & milk\n"); }
	virtual bool CustomWantsCondiments() { return addFlag; } // hook
};