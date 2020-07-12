#include <iostream>
#include <vector>
#include <string>
#include "template_main.h"

using namespace std;

int main()
{
	Coffee * coffee = new Coffee();
	Tea * tea = new Tea();

	coffee->PrepareRecipe();
	printf("==========================================\n");
	coffee->addFlag = false;
	coffee->PrepareRecipe();
	
	printf("==========================================\n");
	tea->PrepareRecipe();

	return 0;
}
