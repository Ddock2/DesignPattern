#pragma once

#include <stdio.h>
#include <iostream>
#include <map>
#include "Iterator.h"

using namespace std;

class DinerMenuIterator : public Iterator
{
public:
	map<const char*, int> menuItems;
	int position;

	DinerMenuIterator(map<const char*, int> menuItems);
	virtual bool HasNext();
	virtual void Next();
};