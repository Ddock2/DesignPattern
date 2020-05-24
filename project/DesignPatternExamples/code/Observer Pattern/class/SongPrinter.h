#pragma once

#include "Observer.h"
#include "Printer.h"

class SongPrinter : public Observer, public Printer
{
private :
	char songList[100][1024];
	int songListNumber;

public :
	SongPrinter();
	virtual void update(Json::Value value);
	virtual void print();
};