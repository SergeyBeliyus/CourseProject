#pragma once
#include <iostream>
#include "ts.h"

#ifndef COURSEPROJECTDLL
#define COURSEDLL __declspec(dllexport)
#else
#define COURSEDLL __declspec(dllinmport)
#endif

class Camel : public TS {
public:
	COURSEDLL Camel(float km);
	COURSEDLL float getTime() override;
protected:
	int sleeptime;
};
