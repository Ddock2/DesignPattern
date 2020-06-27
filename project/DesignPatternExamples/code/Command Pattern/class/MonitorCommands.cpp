#include "MonitorCommands.h"

MonitorPowerOnCommand::MonitorPowerOnCommand(Monitor * monitor)
{
	this->monitor = monitor;
}

void MonitorPowerOnCommand::Execute()
{
	monitor->PowerOn();
}

void MonitorPowerOnCommand::PrintSelf()
{
	printf("Monitor Power On");
}


MonitorPowerOffCommand::MonitorPowerOffCommand(Monitor * monitor)
{
	this->monitor = monitor;
}

void MonitorPowerOffCommand::Execute()
{
	monitor->PowerOff();
}

void MonitorPowerOffCommand::PrintSelf()
{
	printf("Monitor Power Off");
}


MonitorBrightnessUpCommand::MonitorBrightnessUpCommand(Monitor * monitor)
{
	this->monitor = monitor;
}

void MonitorBrightnessUpCommand::Execute()
{
	monitor->BrightnessUp(5);
}

void MonitorBrightnessUpCommand::PrintSelf()
{
	printf("Monitor Brightness Up");
}


MonitorBrightnessDownCommand::MonitorBrightnessDownCommand(Monitor * monitor)
{
	this->monitor = monitor;
}

void MonitorBrightnessDownCommand::Execute()
{
	monitor->BrightnessDown(5);
}

void MonitorBrightnessDownCommand::PrintSelf()
{
	printf("Monitor Brightness Down");
}
