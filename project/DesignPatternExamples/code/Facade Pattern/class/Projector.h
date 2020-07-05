#pragma once

#include <stdio.h>

class Projector
{
public:
	void On() { printf("projector on\n"); }
	void Off() { printf("projector off\n"); }
	void TvMode() { printf("projector TV mode\n"); }
	void WideScreenMode() { printf("projector wide screen mode\n"); }
};