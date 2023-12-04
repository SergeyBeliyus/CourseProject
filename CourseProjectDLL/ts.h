#pragma once
#include <iostream>

#ifndef COURSEPROJECTDLL
#define COURSEDLL __declspec(dllexport)
#else
#define CORSEDLL __declspec(dllinmport)
#endif

class TS {
public:
	int type;
	std::string name;
	COURSEDLL TS();
	COURSEDLL void setActive();
	COURSEDLL void clearActive();
	COURSEDLL bool getActive();
	COURSEDLL virtual float getTime();
protected:
	bool active = false;
	int speed;
	float km;

};