#include "ArtistPrinter.h"

ArtistPrinter::ArtistPrinter()
{
	sprintf(artistList[0], "아직 없음");
	artistListNumber = 1;
}

void ArtistPrinter::update(Json::Value value)
{
	int i;

	i = 0;

	memset(artistList, 0, 100 * 1024);
	artistListNumber = 0;

	while (!value[i].isNull())
	{
		sprintf(artistList[i], value[i]["representationArtist"]["name"].asCString());
		artistListNumber++;
		i++;
	}
}

void ArtistPrinter::print()
{
	int i;

	printf("===== top artist =====\n\n");
	for (i = 0; i < artistListNumber; i++)
	{
		printf("  %d. %s\n", i + 1, artistList[i]);
	}
}