#pragma once

#include "PrintContentsBehavior.h"

class PrintContentsForJson : public PrintContentsBehavior
{
private:

public:
	virtual void PrintContents(char * rawString, int length);
};