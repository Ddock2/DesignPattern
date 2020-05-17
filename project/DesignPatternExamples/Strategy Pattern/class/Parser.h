#pragma once

#include <stdio.h>
#include "PrintContentsBehavior.h"

class Parser
{
private:
	char * rawString;
	int rawStringLength;
	PrintContentsBehavior * printContentsBehavior;

public:
	Parser();
	Parser(PrintContentsBehavior * instance);
	~Parser();

	void SetRawString(char * str, int length);
	void SetPrintContentsBehavior(PrintContentsBehavior * instance);
	void PerformPrintContents();
	virtual void PrintParserInfo();
};