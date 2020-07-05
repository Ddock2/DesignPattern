#pragma once

#include <stdio.h>
#include "Duck.h"

class MallardDuck : public Duck 
{
public :
	virtual void quack();
	virtual void fly();
};
