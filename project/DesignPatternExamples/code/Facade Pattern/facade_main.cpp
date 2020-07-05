#include <iostream>
#include <vector>
#include <string>
#include "facade_main.h"

using namespace std;

int main()
{
	TheaterLight * light = new TheaterLight();
	Screen * screen = new Screen();
	Projector * projector = new Projector();
	Amplifier * amp = new Amplifier();
	DvdPlayer * dvd = new DvdPlayer();

	HomeTheaterFcade * homeTheater = new HomeTheaterFcade(light, screen,projector, amp, dvd);

	homeTheater->WatchMovie();
	homeTheater->EndMovie();

	return 0;
}
