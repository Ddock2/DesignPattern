#pragma once

#include "DinerMenu.h"

DinerMenu::DinerMenu()
{
	this->menuItems.insert(pair<const char*, int>("soup", 2000));
	this->menuItems.insert(pair<const char*, int>("beef", 5000));
	this->menuItems.insert(pair<const char*, int>("hotdog", 1000));
}

map<const char*, int> DinerMenu::GetMenuItems()
{
	return this->menuItems;
}
