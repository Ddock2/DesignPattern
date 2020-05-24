#pragma once

#include <iostream>
#include <list>
#include "Observer.h"

interface_ Subject
{
public :
	std::list<Observer *> observerList;

	virtual void registerObserver(Observer * o) = 0;
	virtual void removeObserver(Observer * o) = 0;
	virtual void notifyObservers() = 0;
};