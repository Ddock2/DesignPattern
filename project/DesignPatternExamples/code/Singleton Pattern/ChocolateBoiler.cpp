#include <stdio.h>
#include "ChocolateBoiler.h"

ChocolateBoiler * ChocolateBoiler::uniqueInstance = NULL;

ChocolateBoiler::ChocolateBoiler()
{
	printf("new instance !!!\n\n");
	empty = true;
	boiled = false;
};

ChocolateBoiler * ChocolateBoiler::GetInstance()
{
	if (uniqueInstance == NULL)
	{
		uniqueInstance = new ChocolateBoiler();
	}
	return uniqueInstance;
}

void ChocolateBoiler::Fill()
{
	printf("Fill()\n");

	if (empty == true)
	{
		printf("    Success : filling\n");
		empty = false;
		boiled = false;
	}
	else
	{
		printf("    Fail    : not empty\n");
	}
}

void ChocolateBoiler::Drain()
{
	printf("Drain()\n");

	if (empty == false && boiled == true)
	{
		printf("    Success : draining\n");
		empty = true;
		boiled = false;
	}
	else
	{
		printf("    Fail    : empty or not boiled");
	}
}

void ChocolateBoiler::Boil()
{
	printf("Boil()\n");

	if (empty == false && boiled == false)
	{
		printf("    Success : boiling\n");
		boiled = true;
	}
	else
	{
		printf("    Fail    : empty or boiled");
	}
}

bool ChocolateBoiler::IsEmpty()
{
	return empty;
}

bool ChocolateBoiler::IsBoiled()
{
	return boiled;
}