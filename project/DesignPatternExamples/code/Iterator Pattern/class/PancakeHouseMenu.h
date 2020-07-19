#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Pancake
{
	char name[20];
	int price;
};

#define PANCAKE_HOUSE_ITEM_MAX 10

class PancakeHouseMenu
{
private :
	struct Pancake * menuItems;
	int menuItemsNum;

public:
	PancakeHouseMenu();
	int GetMenuItems(struct Pancake * items);
	void AddItem(const char * name, int price);
};