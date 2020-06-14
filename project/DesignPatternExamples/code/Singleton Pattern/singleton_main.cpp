#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <process.h>
#include "singleton_main.h"

unsigned int WINAPI ThreadFunction(void *arg);

int main()
{
	HANDLE hThread = NULL;
	DWORD dwThreadID = NULL;

	ChocolateBoiler * boiler1 = ChocolateBoiler::GetInstance();
	ChocolateBoiler * boiler2 = ChocolateBoiler::GetInstance();

	boiler1->Fill();
	boiler2->Fill();

	boiler2->Boil();

	hThread = (HANDLE)_beginthreadex(NULL, 0, ThreadFunction, NULL, 0, (unsigned*)&dwThreadID);
	if (hThread == 0)
	{
		printf("Error create thread\n");
	}
	Sleep(1000);

	boiler1->Drain();


	return 0;
}


unsigned int WINAPI ThreadFunction(void *arg)
{
	ChocolateBoiler * boiler = ChocolateBoiler::GetInstance();

	boiler->Drain();

	return 0;
}