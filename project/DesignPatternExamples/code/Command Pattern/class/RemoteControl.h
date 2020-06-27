#pragma once

#include <stdio.h>
#include <stdlib.h>
#include "Command.h"

class RemoteControl
{
private :
	Command **onCommand;
	Command **offCommand;
	Command *undoCommand;
	int slotNum;

	void InitRemoteControl(int slotNum);
	bool CheckInputSlotNum(int slotNum);
	bool IsNullCommand(Command *command);

public :
	RemoteControl();
	RemoteControl(int slotNum);
	~RemoteControl();
	void SetCommand(int slot, Command * onCommand, Command * offCommand);
	void ClickOnButton(int slot);
	void ClickOffButton(int slot);
	void ClickUndoButton();
	void ListRemoteControlCommand();
};
