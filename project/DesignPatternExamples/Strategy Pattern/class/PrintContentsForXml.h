#pragma once

#include <stdio.h>
#include "PrintContentsBehavior.h"

class PrintContentsForXml : public PrintContentsBehavior
{
private:

public:
	virtual void PrintContents(char * rawString, int length);
};