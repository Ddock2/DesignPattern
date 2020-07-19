#pragma once

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <map>

using namespace std;

#define DINNER_MENU_ITEM_MAX 10

class DinerMenu
{
private:
	map<const char*, int> menuItems;

public:
	DinerMenu();
	map<const char*, int> GetMenuItems();
};