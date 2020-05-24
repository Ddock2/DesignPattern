#pragma once

#include <stdio.h>
#include "Parser.h"

class JsonParser : public Parser
{
private:

public:
	JsonParser();
	JsonParser(PrintContentsBehavior * instance);
	virtual void PrintParserInfo();

};