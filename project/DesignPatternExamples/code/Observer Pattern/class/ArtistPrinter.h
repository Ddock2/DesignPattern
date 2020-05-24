#pragma once

#include "Observer.h"
#include "Printer.h"

class ArtistPrinter : public Observer, public Printer
{
private:
	char artistList[100][1024];
	int artistListNumber;

public :
	ArtistPrinter();
	virtual void update(Json::Value value);
	virtual void print();
};