#pragma once

#include <string.h>
#include <iostream>

using namespace std;

#define interface_ class

interface_ Sauce
{
public:
	char name[1024];
	void printName() { cout << "* Sauce : " << name << endl; };
};