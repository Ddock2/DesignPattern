#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include "strategy_main.h"

#define DSIZ 1024

int LoadRawString(char * fileName, char ** rawString, int * length);


int main()
{
	char fileName[DSIZ];
	char * rawString;
	int size;
	
	rawString = NULL;
	size = 0;

	//GetCurrentDirectory(DSIZ, fileName);
	//printf("%s -\n", fileName);

	/////////////////////////////////////////////////////////////////////////////
	// StringParser Test
	memset(fileName, 0, sizeof(fileName));
	strcpy(fileName, "..\\..\\code\\Strategy Pattern\\test format file\\stringParserFormat.txt");

	if (LoadRawString(fileName, &rawString, &size) == 0)
	{
		//StringParser * stringParser = new StringParser(new PrintContentsForString());
		StringParser * stringParser = new StringParser();
		stringParser->SetPrintContentsBehavior(new PrintContentsForString());
		stringParser->SetRawString(rawString, size);

		stringParser->PrintParserInfo();
		stringParser->PerformPrintContents();

		delete stringParser;
	}

	printf("\n-------------------------------------\n\n");

	/////////////////////////////////////////////////////////////////////////////
	// JsonParser Test
	memset(fileName, 0, sizeof(fileName));
	strcpy(fileName, "..\\..\\code\\Strategy Pattern\\test format file\\jsonParserFormat.txt");

	if (LoadRawString(fileName, &rawString, &size) == 0)
	{
		JsonParser * jsonParser = new JsonParser(new PrintContentsForJson());
		jsonParser->SetRawString(rawString, size);

		jsonParser->PrintParserInfo();
		jsonParser->PerformPrintContents();

		delete jsonParser;
	}

	printf("\n-------------------------------------\n\n");


	/////////////////////////////////////////////////////////////////////////////
	// XmlParser Test
	memset(fileName, 0, sizeof(fileName));
	strcpy(fileName, "..\\..\\Strategy Pattern\\test format file\\xmlParserFormat.txt");

	if (LoadRawString(fileName, &rawString, &size) == 0)
	{
		XmlParser * xmlParser = new XmlParser(new PrintContentsForXml());
		xmlParser->SetRawString(rawString, size);

		xmlParser->PrintParserInfo();
		xmlParser->PerformPrintContents();

		delete xmlParser;
	}

	printf("\n-------------------------------------\n\n");



	free(rawString);

	return 0;
}


int LoadRawString(char * fileName, char ** rawString, int * size)
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