#pragma once

#include <stdio.h>
#include "Duck.h"
#include "Turkey.h"

class TurkeyToDuckAdapter : public Duck 
{
private :
	Turkey * turkey;

public :
	TurkeyToDuckAdapter(Turkey * turkey);
	
	void quack();
	void fly();
};
