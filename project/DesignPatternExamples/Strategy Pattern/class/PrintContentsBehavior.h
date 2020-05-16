#pragma once

#define interface class

interface PrintContentsBehavior
{
public:
	virtual void PrintContents(char * rawString, int length) = 0;
};