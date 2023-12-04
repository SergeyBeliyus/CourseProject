#include "fast_camel.h"

FastCamel::FastCamel(float km) {
	name = "Верблюд-быстроход";
	type = 1;
	speed = 40;
	sleeptime = 10;
	this->km = km;
}

float FastCamel::getTime() {
	float time = km / speed;
	float fulltime = time;
	int stops = static_cast<int>(time) / sleeptime;
	for (int i = 1; i <= stops; i++) {
		if (i == 1) {
			fulltime = fulltime + 5;
		}
		else if (i == 2) {
			fulltime = fulltime + static_cast<float>(6.5);
		}
		else {
			fulltime = fulltime + 8;
		}
	}
	return fulltime;
}