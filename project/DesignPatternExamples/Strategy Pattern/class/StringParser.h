#pragma once

#include "Parser.h"

class StringParser : public Parser
{
private :

public :
	StringParser();
	StringParser(PrintContentsBehavior * instance);
	virtual void PrintParserInfo();

};