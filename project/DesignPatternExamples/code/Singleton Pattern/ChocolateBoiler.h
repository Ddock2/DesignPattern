#pragma once


class ChocolateBoiler
{
private :
	bool empty;
	bool boiled;

	static ChocolateBoiler * uniqueInstance;

	ChocolateBoiler();

public :
	static ChocolateBoiler * GetInstance();

	void Fill();
	void Drain();
	void Boil();
	bool IsEmpty();
	bool IsBoiled();
};