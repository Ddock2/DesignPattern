#pragma once

#include "PrintContentsBehavior.h"

class PrintContentsForString : public PrintContentsBehavior
{
private:

public:
	virtual void PrintContents(char * rawString, int length);
};