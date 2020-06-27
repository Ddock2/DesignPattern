#include <stdio.h>
#include "RemoteControl.h"

void RemoteControl::InitRemoteControl(int slotNum)
{
	int i;

	if (slotNum < 1 || slotNum > 12)
	{
		printf("inputted slotNum is not supported\n");
		printf("slotNum set default(10)\n");
		slotNum = 10;
	}

	onCommand = (Command **)malloc(sizeof(Command *) * slotNum);
	offCommand = (Command **)malloc(sizeof(Command *) * slotNum);
	undoCommand = NULL;

	for (i = 0; i < slotNum; i++)
	{
		onCommand[i] = NULL;
		offCommand[i] = NULL;
	}

	this->slotNum = slotNum;
}

bool RemoteControl::CheckInputSlotNum(int slotNum)
{
	if (slotNum >= 0 && slotNum < this->slotNum)
	{
		return true;
	}

	return false;
}

bool RemoteControl::IsNullCommand(Command * command)
{
	if (command == NULL)
	{
		return true;
	}

	return false;
}

RemoteControl::RemoteControl()
{
	InitRemoteControl(10);
}

RemoteControl::RemoteControl(int slotNum)
{
	InitRemoteControl(slotNum);
}

RemoteControl::~RemoteControl()
{
	int i;

	for (i = 0; i < slotNum; i++)
	{
		if (onCommand[i] != NULL)
		{
			delete(onCommand[i]);
			onCommand[i] = NULL;
		}

		if (offCommand[i] != NULL)
		{
			delete(offCommand[i]);
			offCommand[i] = NULL;
		}
	}

	free(onCommand);
	free(offCommand);
}

void RemoteControl::SetCommand(int slot, Command * onCommand, Command * offCommand)
{
	if (CheckInputSlotNum(slot))
	{
		this->onCommand[slot] = onCommand;
		this->offCommand[slot] = offCommand;
	}
	else
	{
		printf("Fail to SetCommand : invalid slot\n");
	}
}

void RemoteControl::ClickOnButton(int slot)
{
	if (CheckInputSlotNum(slot))
	{
		if (onCommand[slot] != NULL)
		{
			printf("Click onCommand : ");
			onCommand[slot]->PrintSelf();
			printf("\n");

			onCommand[slot]->Execute();

			if (offCommand[slot] != NULL)
			{
				undoCommand = offCommand[slot];
			}
			else
			{
				undoCommand = onCommand[slot];
			}
		}
		else
		{
			printf("this button is NULL\n");
		}
	}
	else
	{
		printf("Fail to SetCommand : invalid slot\n");
	}
}

void RemoteControl::ClickOffButton(int slot)
{
	if (CheckInputSlotNum(slot))
	{
		if (offCommand[slot] != NULL)
		{
			printf("Click offCommand : ");
			offCommand[slot]->PrintSelf();
			printf("\n");

			offCommand[slot]->Execute();

			if (offCommand[slot] != NULL)
			{
				undoCommand = offCommand[slot];
			}
			else
			{
				undoCommand = onCommand[slot];
			}
		}
		else
		{
			printf("this button is NULL\n");
		}
	}
	else
	{
		printf("Fail to SetCommand : invalid slot\n");
	}
}

void RemoteControl::ClickUndoButton()
{
	if (undoCommand != NULL)
	{
		printf("Click undoCommand : ");
		undoCommand->PrintSelf();
		printf("\n");

		undoCommand->Execute();
	}
	else
	{
		printf("undoCommand is NULL\n");
	}
}

void RemoteControl::ListRemoteControlCommand()
{
	int i;

	printf("< Remocon Command List >\n");
	
	for (i = 0; i < this->slotNum; i++)
	{
		printf("    onCommand[%d] : ", i);

		if (!IsNullCommand(this->onCommand[i]))
		{
			this->onCommand[i]->PrintSelf();
			printf("\n");
		}
		else
		{
			printf("\n");
		}
	}

	printf("\n");

	for (i = 0; i < this->slotNum; i++)
	{
		printf("    offCommand[%d] : ", i);

		if (!IsNullCommand(this->offCommand[i]))
		{
			this->offCommand[i]->PrintSelf();
			printf("\n");
		}
		else
		{
			printf("\n");
		}
	}

	printf("\n");
}
