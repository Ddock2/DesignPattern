#pragma once

#include <stdio.h>

class TheaterLight
{
public:
	void On() { printf("light on\n"); }
	void Off() { printf("light off\n"); }
	void Dim() { printf("light dim\n"); }
};