#pragma once

#include <stdio.h>
#include "Command.h"
#include "Audio.h"

class AudioPowerOnCommand : public Command
{
private:
	Audio * audio;

public:
	AudioPowerOnCommand(Audio * audio);
	virtual void Execute();
	virtual void PrintSelf();
};


class AudioPowerOffCommand : public Command
{
private:
	Audio * audio;

public:
	AudioPowerOffCommand(Audio * audio);
	virtual void Execute();
	virtual void PrintSelf();
};


class AudioVolumeUpCommand : public Command
{
private:
	Audio * audio;

public:
	AudioVolumeUpCommand(Audio * audio);
	virtual void Execute();
	virtual void PrintSelf();
};


class AudioVolumeDownCommand : public Command
{
private:
	Audio * audio;

public:
	AudioVolumeDownCommand(Audio * audio);
	virtual void Execute();
	virtual void PrintSelf();
};


class AudioMuteCommand : public Command
{
private:
	Audio * audio;

public:
	AudioMuteCommand(Audio * audio);
	virtual void Execute();
	virtual void PrintSelf();
};
