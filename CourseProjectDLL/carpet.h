#pragma once
#include <iostream>
#include "ts.h"

#ifndef COURSEPROJECTDLL
#define COURSEDLL __declspec(dllexport)
#else
#define COURSEDLL __declspec(dllinmport)
#endif

class Carpet : public TS {
public:
	COURSEDLL float getTime() override;
	COURSEDLL Carpet(float km);
};