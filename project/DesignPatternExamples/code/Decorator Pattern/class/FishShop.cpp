#include "FishShop.h"

FishShop::FishShop()
{
	description = "생선가게\n\t";
}

std::string FishShop::GetDescription()
{
	return description;
}

int FishShop::Cost()
{
	return 0;
}