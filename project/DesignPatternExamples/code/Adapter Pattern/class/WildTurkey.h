#pragma once

#include <stdio.h>
#include "Turkey.h"

class WildTurkey : public Turkey 
{
public :
	virtual void gobble();
	virtual void fly();
};
