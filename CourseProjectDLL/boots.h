#pragma once
#include <iostream>
#include "ts.h"

#ifndef COURSEPROJECTDLL
#define COURSEDLL __declspec(dllexport)
#else
#define COURSEDLL __declspec(dllinmport)
#endif

class Boots : public TS {
public:
	COURSEDLL Boots(float km);
	COURSEDLL float getTime() override;
protected:
	int sleeptime;
};
