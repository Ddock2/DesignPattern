#include "Bill.h"

Bill::Bill()
{
	this->description = "empty";
}

std::string Bill::GetDescription()
{
	return description;
}

int Bill::Cost()
{
	return 0;
}