#include "AudioCommands.h"

AudioPowerOnCommand::AudioPowerOnCommand(Audio * audio)
{
	this->audio = audio;
}

void AudioPowerOnCommand::Execute()
{
	audio->PowerOn();
}

void AudioPowerOnCommand::PrintSelf()
{
	printf("Audio Power On");
}


AudioPowerOffCommand::AudioPowerOffCommand(Audio * audio)
{
	this->audio = audio;
}

void AudioPowerOffCommand::Execute()
{
	audio->PowerOff();
}

void AudioPowerOffCommand::PrintSelf()
{
	printf("Audio Power Off");
}


AudioVolumeUpCommand::AudioVolumeUpCommand(Audio * audio)
{
	this->audio = audio;
}

void AudioVolumeUpCommand::Execute()
{
	audio->VolumeUp(5);
}

void AudioVolumeUpCommand::PrintSelf()
{
	printf("Audio Volume Up");
}


AudioVolumeDownCommand::AudioVolumeDownCommand(Audio * audio)
{
	this->audio = audio;
}

void AudioVolumeDownCommand::Execute()
{
	audio->VolumeDown(5);
}

void AudioVolumeDownCommand::PrintSelf()
{
	printf("Audio Volume Down");
}


AudioMuteCommand::AudioMuteCommand(Audio * audio)
{
	this->audio = audio;
}

void AudioMuteCommand::Execute()
{
	audio->Mute();
}

void AudioMuteCommand::PrintSelf()
{
	printf("Audio Volume Mute");
}
