#include "ChartData.h"

ChartData::ChartData()
{
	sprintf(url, "https://www.music-flo.com/api/display/v1/browser/chart/1/track/list?size=100");
	maxRank = 100;
}

void ChartData::registerObserver(Observer * o)
{
	observerList.push_back(o);
}

void ChartData::removeObserver(Observer * o)
{
	observerList.remove(o);
}

void ChartData::notifyObservers()
{
	for (Observer * o : observerList)
	{
		o->update(nowData["data"]["trackList"]);
	}
}

void ChartData::GetChartData()
{
	char command[4096];
	char outputPath[1024] = "C:\\Users\\Public\\Documents\\data.json";

	char * rawString;
	int size;


	rawString = NULL;
	size = 0;

	
	sprintf(command, "curl -X GET %s > %s", url, outputPath);
	system("chcp 65001");
	system(command);

	LoadRawString(outputPath, &rawString, &size);

	Json::Reader reader;
	const std::string rawJson(rawString);
	reader.parse(rawJson, nowData);

	notifyObservers();
}

void ChartData::SetURL(int n)
{
	switch (n)
	{
	case 1:
		sprintf(url, "https://www.music-flo.com/api/display/v1/browser/chart/3550/track/list?size=%d", maxRank);
		break;
	case 2:
		sprintf(url, "https://www.music-flo.com/api/display/v1/browser/chart/3559/track/list?size=%d", maxRank);
		break;
	default:
		sprintf(url, "https://www.music-flo.com/api/display/v1/browser/chart/1/track/list?size=%d", maxRank);
	}
}

void ChartData::SetMaxRank(int n)
{
	maxRank = n;
}

int ChartData::LoadRawString(char * fileName, char ** rawString, int * size)
{
	FILE *fp;

	fp = fopen(fileName, "r");
	if (fp != NULL)
	{
		fseek(fp, 0, SEEK_END);
		*size = ftell(fp);

		*rawString = (char *)realloc(*rawString, *size + 1);
		memset(*rawString, 0, *size + 1);

		fseek(fp, 0, SEEK_SET);
		fread(*rawString, *size, 1, fp);
	}
	else
	{
		printf("Error : Not found [%s]\n", fileName);

		return -1;
	}

	fclose(fp);

	return 0;
}
