#include "DinerMenuIterator.h"

bool DinerMenuIterator::HasNext()
{
	if (this->position < this->menuItems.size())
	{
		return true;
	}

	return false;
}

void DinerMenuIterator::Next()
{
	int i;
	map<const char*, int>::iterator itr;

	i = 0;

	for (itr = this->menuItems.begin(); itr != this->menuItems.end(); itr++)
	{
		if (i == this->position)
		{
			this->position++;
			printf("%s : %d\n", itr->first, itr->second);
		}

		i++;
	}
}

DinerMenuIterator::DinerMenuIterator(map<const char*, int> menuItems)
{
	this->position = 0;
	this->menuItems = menuItems;
}
