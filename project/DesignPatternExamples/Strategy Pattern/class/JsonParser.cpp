#include <stdio.h>
#include "JsonParser.h"

JsonParser::JsonParser()
{

}

JsonParser::JsonParser(PrintContentsBehavior * instance):Parser(instance)
{

}

void JsonParser::PrintParserInfo()
{
	printf("- this is JsonParser -\n\n");
}