#include "HomeTheaterFacade.h"

HomeTheaterFcade::HomeTheaterFcade(TheaterLight * light, Screen * screen, Projector * projector, Amplifier * amp, DvdPlayer * dvd)
{
	this->light = light;
	this->screen = screen;
	this->projector = projector;
	this->amp = amp;
	this->dvd = dvd;
}

void HomeTheaterFcade::WatchMovie()
{
	printf("Get ready to watch a movie ...\n");
	
	light->Dim();
	screen->Down();
	projector->On();
	projector->WideScreenMode();
	amp->On();
	amp->SetSurroundSound();
	amp->SetVolume(5);
	dvd->On();
	dvd->Play("movie");
	printf("\n");
}

void HomeTheaterFcade::EndMovie()
{
	printf("Shutting movie theater down ...\n");

	light->Off();
	screen->Up();
	projector->Off();
	amp->Off();
	dvd->Stop();
	dvd->Eject();
	dvd->Off();
	printf("\n");
}
