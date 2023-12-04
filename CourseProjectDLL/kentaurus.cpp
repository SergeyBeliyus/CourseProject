#include "kentaurus.h"

Kentaurus::Kentaurus(float km) {
	name = "Кентавр";
	type = 1;
	speed = 15;
	sleeptime = 8;
	this->km = km;
}

float Kentaurus::getTime() {
	float time = km / speed;
	float fulltime = time;
	int stops = static_cast<int>(time) / sleeptime;
	for (int i = 1; i <= stops; i++) {
		fulltime = fulltime + 2;
	}
	return fulltime;
}