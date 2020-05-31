#include <stdio.h>
#include <string.h>
#include <iostream>
#include "decorator_main.h"

using namespace std;

int main()
{
	// ��� : 1000
	// ������ : 2000
	// ��ġ : 5000
	// ���� : 3000

	Bill *bill = new FruitShop();
	
	bill = new Apple(bill);
	bill = new Apple(bill);
	bill = new Apple(bill);
	bill = new Orange(bill);

	cout << bill->GetDescription().c_str();
	cout << "- ���� : " << bill->Cost() << " -" << endl;

	delete(bill);
	cout << "*********************************************" << endl;

	bill = new FishShop();
	bill = new Tuna(bill);
	bill = new Octopus(bill);
	bill = new Octopus(bill);

	cout << bill->GetDescription().c_str();
	cout << "- ���� : " << bill->Cost() << " -" << endl;

	delete(bill);

	return 0;
}