#pragma once

#include "PancakeHouseMenu.h"

PancakeHouseMenu::PancakeHouseMenu()
{
	menuItems = (struct Pancake *) malloc(sizeof(struct Pancake) * PANCAKE_HOUSE_ITEM_MAX);

	this->menuItemsNum = 0;

	AddItem("regular pancake", 1000);
	AddItem("blueberry pancake", 2000);
	AddItem("waffle", 1500);
}

int PancakeHouseMenu::GetMenuItems(struct Pancake * items)
{
	memcpy(items, this->menuItems, sizeof(struct Pancake) * PANCAKE_HOUSE_ITEM_MAX);
	return this->menuItemsNum;
}

void PancakeHouseMenu::AddItem(const char * name, int price)
{
	strcpy_s(menuItems[this->menuItemsNum].name, name);
	menuItems[this->menuItemsNum].price = price;
	this->menuItemsNum++;
}
