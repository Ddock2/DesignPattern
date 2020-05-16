#include <stdio.h>
#include "Parser.h"

Parser::Parser()
{
	//printf("    Parser constructor\n");
	this->rawString = nullptr;
	this->rawStringLength = 0;
	this->printContentsBehavior = nullptr;
}

Parser::Parser(PrintContentsBehavior * instance)
{
	//printf("    Parser constructor2\n");
	this->rawString = nullptr;
	this->rawStringLength = 0;
	this->printContentsBehavior = instance;
}

Parser::~Parser()
{
	//printf("    Parser destructor\n");
	if (this->printContentsBehavior != nullptr)
	{
		delete this->printContentsBehavior;
	}
}

void Parser::SetRawString(char * str, int length)
{
	this->rawString = str;
	this->rawStringLength = length;
}

void Parser::SetPrintContentsBehavior(PrintContentsBehavior * instance)
{
	this->printContentsBehavior = instance;
}

void Parser::PerformPrintContents()
{
	if (this->printContentsBehavior != nullptr)
	{
		printContentsBehavior->PrintContents(this->rawString, this->rawStringLength);
	}
	else
	{
		printf("error : printContentsBehavior is null\n");
	}
}

void Parser::PrintParserInfo()
{
	printf("- 아직 없음 -\n\n");
}