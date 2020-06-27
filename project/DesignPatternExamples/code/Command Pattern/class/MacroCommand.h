#pragma once

#include <stdio.h>
#include <stdlib.h>
#include "Command.h"
#include "MonitorCommands.h"
#include "AudioCommands.h"

class MacroCommand : public Command
{
private:
	Command ** commandList;
	int commandListSize;

public:
	MacroCommand(Command ** commandList, int commandListSize);
	~MacroCommand();
	virtual void Execute();
	virtual void PrintSelf();
};