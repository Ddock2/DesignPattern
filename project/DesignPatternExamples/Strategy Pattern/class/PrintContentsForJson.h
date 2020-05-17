#pragma once

#include <stdio.h>
#include <iostream>
#include "PrintContentsBehavior.h"
#include "..\extern tools\jsoncpp\json\json.h"

class PrintContentsForJson : public PrintContentsBehavior
{
private:
public:
	virtual void PrintContents(char * rawString, int length);
	//void PrintJson(Json::Value * jsonValue, int depth);
};