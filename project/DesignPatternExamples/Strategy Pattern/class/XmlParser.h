#pragma once

#include <stdio.h>
#include "Parser.h"

class XmlParser : public Parser
{
private:

public:
	XmlParser();
	XmlParser(PrintContentsBehavior * instance);
	virtual void PrintParserInfo();

};