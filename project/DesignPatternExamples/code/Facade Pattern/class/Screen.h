#pragma once

#include <stdio.h>

class Screen
{
public:
	void Down() { printf("screen down\n"); }
	void Up() { printf("screen up\n"); }
};