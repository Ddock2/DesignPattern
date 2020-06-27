#pragma once

#include <stdio.h>

class Command
{
public:
	virtual void Execute() {};
	virtual void PrintSelf() {};
};