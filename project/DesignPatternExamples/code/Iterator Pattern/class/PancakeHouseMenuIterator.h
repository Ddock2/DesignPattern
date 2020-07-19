#pragma once

#include <stdio.h>
#include "Iterator.h"
#include "PancakeHouseMenu.h"

using namespace std;

class PancakeHouseMenuIterator : public Iterator
{
public:
	struct Pancake * menuItems;
	int menuItemsNum;
	int position;

	PancakeHouseMenuIterator(struct Pancake * menuItems, int menuItemsNum);
	virtual bool HasNext();
	virtual void Next();
};