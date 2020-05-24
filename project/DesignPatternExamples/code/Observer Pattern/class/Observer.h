#pragma once

#include "interface_.h"
#include "..\extern tools\jsoncpp\json\json.h"

interface_ Observer
{
public:
	virtual void update(Json::Value value) = 0;
};