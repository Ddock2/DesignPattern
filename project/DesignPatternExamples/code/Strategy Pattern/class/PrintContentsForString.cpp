#include "PrintContentsForString.h"

void PrintContentsForString::PrintContents(char * rawString, int length)
{
	int start;
	int end;
	int contentNumber;
	int i;
	int j;

	start = 0;
	end = 0;
	contentNumber = 0;

	for (i = 0; i < length; i++)
	{
		if (rawString[i] == '\\')
		{
			end = i;
			
			printf("content[%d] : ", contentNumber++);
			for (j = start; j < end; j++)
			{
				printf("%c", rawString[j]);
			}
			printf("\n");

			start = end + 1;
		}
	}
}