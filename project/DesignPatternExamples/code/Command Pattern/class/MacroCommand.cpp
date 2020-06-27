#include "MacroCommand.h"

MacroCommand::MacroCommand(Command ** commandList, int commandListSize)
{
	this->commandList = commandList;
	this->commandListSize = commandListSize;
}

MacroCommand::~MacroCommand()
{
	int i;

	for (i = 0; i < this->commandListSize; i++)
	{
		if(commandList[i] != NULL)
		{ 
			delete(commandList[i]);
			commandList[i] = NULL;
		}
	}

	free(commandList);
}

void MacroCommand::Execute()
{
	int i;

	for (i = 0; i < this->commandListSize; i++)
	{
		(this->commandList[i])->Execute();
	}
}

void MacroCommand::PrintSelf()
{
	int i;

	printf("Macro [ ");

	for (i = 0; i < this->commandListSize; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}

		(this->commandList[i])->PrintSelf();
	}

	printf(" ]");
}
