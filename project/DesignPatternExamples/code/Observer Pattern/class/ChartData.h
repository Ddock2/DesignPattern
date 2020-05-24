#pragma once

#include "Subject.h"

class ChartData : public Subject
{
private :
	int LoadRawString(char * fileName, char ** rawString, int * length);
	char url[2048];
	int maxRank;
public :
	Json::Value nowData;

	ChartData();
	virtual void registerObserver(Observer * o);
	virtual void removeObserver(Observer * o);
	virtual void notifyObservers();
	void GetChartData();
	void SetURL(int n);
	void SetMaxRank(int n);
};