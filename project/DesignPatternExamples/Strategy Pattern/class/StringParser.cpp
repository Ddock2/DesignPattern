#include <stdio.h>
#include "StringParser.h"

StringParser::StringParser()
{

}

StringParser::StringParser(PrintContentsBehavior * instance) :Parser(instance)
{

}

void StringParser::PrintParserInfo()
{
	printf("- this is StringParser -\n\n");
}
