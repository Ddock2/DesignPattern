#include <stdio.h>
#include <string.h>
#include <iostream>
#include "decorator_main.h"

using namespace std;

int main()
{
	// 사과 : 1000
	// 오렌지 : 2000
	// 참치 : 5000
	// 문어 : 3000

	Bill *bill = new FruitShop();
	
	bill = new Apple(bill);
	bill = new Apple(bill);
	bill = new Apple(bill);
	bill = new Orange(bill);

	cout << bill->GetDescription().c_str();
	cout << "- 가격 : " << bill->Cost() << " -" << endl;

	delete(bill);
	cout << "*********************************************" << endl;

	bill = new FishShop();
	bill = new Tuna(bill);
	bill = new Octopus(bill);
	bill = new Octopus(bill);

	cout << bill->GetDescription().c_str();
	cout << "- 가격 : " << bill->Cost() << " -" << endl;

	delete(bill);

	return 0;
}