#include "PancakeHouseMenuIterator.h"

PancakeHouseMenuIterator::PancakeHouseMenuIterator(Pancake * menuItems, int menuItemsNum)
{
	this->position = 0;
	this->menuItems = menuItems;
	this->menuItemsNum = menuItemsNum;
}

bool PancakeHouseMenuIterator::HasNext()
{
	if (position < menuItemsNum)
	{
		return true;
	}

	return false;
}

void PancakeHouseMenuIterator::Next()
{
	printf("%s : %d\n", this->menuItems[position].name, this->menuItems[position].price);
	position++;
}
