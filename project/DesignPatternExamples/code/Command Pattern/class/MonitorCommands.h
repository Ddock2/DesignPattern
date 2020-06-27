#pragma once

#include <stdio.h>
#include "Command.h"
#include "Monitor.h"

class MonitorPowerOnCommand : public Command
{
private :
	Monitor * monitor;

public :
	MonitorPowerOnCommand(Monitor * monitor);
	virtual void Execute();
	virtual void PrintSelf();
};


class MonitorPowerOffCommand : public Command
{
private:
	Monitor * monitor;

public:
	MonitorPowerOffCommand(Monitor * monitor);
	virtual void Execute();
	virtual void PrintSelf();
};


class MonitorBrightnessUpCommand : public Command
{
private:
	Monitor * monitor;

public:
	MonitorBrightnessUpCommand(Monitor * monitor);
	virtual void Execute();
	virtual void PrintSelf();
};


class MonitorBrightnessDownCommand : public Command
{
private:
	Monitor * monitor;

public:
	MonitorBrightnessDownCommand(Monitor * monitor);
	virtual void Execute();
	virtual void PrintSelf();
};
