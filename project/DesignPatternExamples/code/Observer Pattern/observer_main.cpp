#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include "observer_main.h"

int main()
{
	ChartData * chartD = new ChartData();
	SongPrinter * songP = new SongPrinter();
	ArtistPrinter * artistP = new ArtistPrinter();

	chartD->registerObserver(songP);
	chartD->registerObserver(artistP);

	songP->print();
	artistP->print();

	chartD->GetChartData();
	songP->print();
	artistP->print();

	chartD->removeObserver(artistP);
	chartD->SetMaxRank(5);
	chartD->SetURL(2);
	chartD->GetChartData();
	artistP->print();
	songP->print();

	return 0;
}