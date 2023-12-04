#include "camel.h"

Camel::Camel(float km) {
	name = "Верблюд";
	type = 1;
	speed = 10;
	sleeptime = 30;
	this->km = km;
}

float Camel::getTime(){
	float time = km / speed;
	float fulltime = time;
	int stops = static_cast<int>(time) / sleeptime;
	for (int i = 1; i <= stops; i++) {
		if (i == 1) {
			fulltime = fulltime + static_cast<float>(5);
		}
		else {
			fulltime = fulltime + static_cast<float>(8);
		}
	}
	return fulltime;
}