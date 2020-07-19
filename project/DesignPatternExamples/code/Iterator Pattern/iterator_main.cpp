#include <iostream>
#include <vector>
#include <string>
#include "iterator_main.h"

using namespace std;

int main()
{
	DinerMenu * dinerM = new DinerMenu();
	PancakeHouseMenu * pencakeM = new PancakeHouseMenu();

	DinerMenuIterator * dinnerI = new DinerMenuIterator(dinerM->GetMenuItems());
	struct Pancake * pancakeList;
	pancakeList = (struct Pancake *) malloc(sizeof(struct Pancake) * PANCAKE_HOUSE_ITEM_MAX);
	int pancakeListNum = pencakeM->GetMenuItems(pancakeList);
	PancakeHouseMenuIterator * pancakeI = new PancakeHouseMenuIterator(pancakeList, pancakeListNum);

	printf("Diner Menu\n");
	while (dinnerI->HasNext())
	{
		dinnerI->Next();
	}

	printf("\n\nPancake House Menu\n");
	while (pancakeI->HasNext())
	{
		pancakeI->Next();
	}

	return 0;
}
