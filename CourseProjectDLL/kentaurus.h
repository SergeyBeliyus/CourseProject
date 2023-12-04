#pragma once
#include <iostream>
#include "ts.h"

#ifndef COURSEPROJECTDLL
#define COURSEDLL __declspec(dllexport)
#else
#define COURSEDLL __declspec(dllinmport)
#endif

class Kentaurus : public TS {
public:
	COURSEDLL Kentaurus(float km);
	COURSEDLL float getTime() override;
protected:
	int sleeptime;
};
