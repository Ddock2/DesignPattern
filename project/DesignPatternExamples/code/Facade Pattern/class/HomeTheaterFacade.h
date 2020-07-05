#pragma once

#include <stdio.h>
#include "TheaterLight.h"
#include "Screen.h"
#include "Projector.h"
#include "Amplifier.h"
#include "DvdPlayer.h"

class HomeTheaterFcade
{
private :
	TheaterLight * light;
	Screen * screen;
	Projector * projector;
	Amplifier * amp;
	DvdPlayer * dvd;

public:
	HomeTheaterFcade(TheaterLight * light, Screen * screen, Projector * projector, Amplifier * amp, DvdPlayer * dvd);
	void WatchMovie();
	void EndMovie();
};