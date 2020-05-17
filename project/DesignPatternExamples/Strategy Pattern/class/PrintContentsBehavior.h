#pragma once

#define interface_ class

interface_ PrintContentsBehavior
{
public:
	virtual void PrintContents(char * rawString, int length) = 0;
};