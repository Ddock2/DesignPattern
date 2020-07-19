#pragma once

class Iterator
{
public:
	virtual bool HasNext() { return false; }
	virtual void Next() {}
};