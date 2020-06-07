#pragma once

#include <string.h>
#include <iostream>

using namespace std;

#define interface_ class

interface_ Pepperoni
{
public:
	char name[1024];
	void printName() { cout << "* Pepperoni : " << name << endl; };
};