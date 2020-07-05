#include "TurkeyToDuckAdapter.h"

TurkeyToDuckAdapter::TurkeyToDuckAdapter(Turkey * turkey)
{
	this->turkey = turkey;
}

void TurkeyToDuckAdapter::quack()
{
	printf("adapter : ");
	turkey->gobble();
}

void TurkeyToDuckAdapter::fly()
{
	printf("adapter : ");
	turkey->fly();
}
