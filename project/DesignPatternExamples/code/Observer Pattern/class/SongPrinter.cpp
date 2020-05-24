#include <stdio.h>
#include "SongPrinter.h"

SongPrinter::SongPrinter()
{
	sprintf(songList[0], "아직 없음");
	songListNumber = 1;
}

void SongPrinter::update(Json::Value value)
{
	int i;

	i = 0;

	memset(songList, 0, 100 * 1024);
	songListNumber = 0;

	while (!value[i].isNull())
	{
		sprintf(songList[i], value[i]["name"].asCString());
		songListNumber++;
		i++;
	}
}

void SongPrinter::print()
{
	int i;

	printf("===== top song =====\n\n");
	for (i = 0; i < songListNumber; i++)
	{
		printf("  %d. %s\n", i + 1, songList[i]);
	}
}