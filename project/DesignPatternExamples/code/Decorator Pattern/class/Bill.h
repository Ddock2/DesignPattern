#pragma once

#include "interface_.h"
#include <iostream>

interface_ Bill
{
public :
	std::string description;
	Bill();
	virtual std::string GetDescription();
	virtual int Cost();
};