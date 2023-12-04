#pragma once
#include <iostream>
#include "ts.h"

#ifndef COURSEPROJECTDLL
#define COURSEDLL __declspec(dllexport)
#else
#define COURSEDLL __declspec(dllinmport)
#endif

class Eagle : public TS {
public:
	COURSEDLL Eagle(float km);
	COURSEDLL float getTime() override;
};