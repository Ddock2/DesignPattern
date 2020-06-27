#include <iostream>
#include <vector>
#include <string>
#include "command_main.h"

using namespace std;

int main()
{
	Monitor * monitor = new Monitor();
	Audio * audio = new Audio();

	RemoteControl * remocon = new RemoteControl();

	SetRemoteControlCommand(remocon, monitor, audio);

	remocon->ListRemoteControlCommand();
	
	printf("==================== Before ====================\n");
	monitor->PrintProductStatus();
	audio->PrintProductStatus();

	printf("================================================\n");

	remocon->ClickOnButton(0);		// volume power on
	remocon->ClickOnButton(4);		// audio power on
	remocon->ClickOffButton(1);		// monitor brightness down
	remocon->ClickOnButton(9);		// audio mute
	remocon->ClickOffButton(9);		// null command
	printf("\n");
	remocon->ClickOnButton(7);		// first macro
	printf("\n");
	remocon->ClickUndoButton();		// undo first macro == second macro

	printf("\n=================== After ===================\n");
	monitor->PrintProductStatus();
	audio->PrintProductStatus();

	delete(remocon);
	delete(monitor);
	delete(audio);

	return 0;
}

void SetRemoteControlCommand(RemoteControl * remocon, Monitor * monitor, Audio * audio)
{
	MonitorPowerOnCommand * monitorPowerOn = new MonitorPowerOnCommand(monitor);
	MonitorPowerOffCommand * monitorPowerOff = new MonitorPowerOffCommand(monitor);
	MonitorBrightnessUpCommand * monitorBrightnessUp = new MonitorBrightnessUpCommand(monitor);
	MonitorBrightnessDownCommand * monitorBrightnessDown = new MonitorBrightnessDownCommand(monitor);

	AudioPowerOnCommand * audioPowerOn = new AudioPowerOnCommand(audio);
	AudioPowerOffCommand * audioPowerOff = new AudioPowerOffCommand(audio);
	AudioVolumeUpCommand * audioVolumeUp = new AudioVolumeUpCommand(audio);
	AudioVolumeDownCommand * audioVolumeDown = new AudioVolumeDownCommand(audio);
	AudioMuteCommand * audioMute = new AudioMuteCommand(audio);
	

	MacroCommand * firstMacro;
	MacroCommand * secondMacro;
	Command **firstCommandList;
	Command **secondCommandList;

	firstCommandList = (Command **) malloc(sizeof(Command *) * 3);
	secondCommandList = (Command **) malloc(sizeof(Command *) * 3);

	firstCommandList[0] = monitorBrightnessUp;
	firstCommandList[1] = audioVolumeDown;
	firstCommandList[2] = audioMute;
	firstMacro = new MacroCommand(firstCommandList, 3);

	secondCommandList[0] = monitorBrightnessDown;
	secondCommandList[1] = audioVolumeUp;
	secondCommandList[2] = audioMute;
	secondMacro = new MacroCommand(secondCommandList, 3);


	remocon->SetCommand(0, monitorPowerOn, monitorPowerOff);
	remocon->SetCommand(1, monitorBrightnessUp, monitorBrightnessDown);
	
	remocon->SetCommand(4, audioPowerOn, audioPowerOff);
	remocon->SetCommand(5, audioVolumeUp, audioVolumeDown);
	
	remocon->SetCommand(7, firstMacro, secondMacro);

	remocon->SetCommand(9, audioMute, NULL);
}
