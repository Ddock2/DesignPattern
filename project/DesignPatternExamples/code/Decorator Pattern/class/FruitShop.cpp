#include "FruitShop.h"

FruitShop::FruitShop()
{
	description = "과일가게\n\t";
}

std::string FruitShop::GetDescription()
{
	return description;
}

int FruitShop::Cost()
{
	return 0;
}