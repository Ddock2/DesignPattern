#pragma once

#include <string.h>
#include <iostream>

using namespace std;

#define interface_ class

interface_ Cheese
{
public:
	char name[1024];
	void printName() { cout << "* Cheese : " << name << endl; };
};