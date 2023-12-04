#pragma once
#include <iostream>
#include "ts.h"

#ifndef COURSEPROJECTDLL
#define COURSEDLL __declspec(dllexport)
#else
#define COURSEDLL __declspec(dllinmport)
#endif

class Broom : public TS {
public:
	COURSEDLL Broom(float km);
	COURSEDLL float getTime() override;
};