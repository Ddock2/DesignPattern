#include "XmlParser.h"

XmlParser::XmlParser()
{

}

XmlParser::XmlParser(PrintContentsBehavior * instance) :Parser(instance)
{

}

void XmlParser::PrintParserInfo()
{
	printf("- this is XmlParser -\n\n");
}