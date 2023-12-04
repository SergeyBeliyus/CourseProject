#include "boots.h"

Boots::Boots(float km) {
	name = "Ботинки-вездеходы";
	type = 1;
	speed = 6;
	sleeptime = 60;
	this->km = km;
}

float Boots::getTime() {
	float time = km / speed;
	float fulltime = time;
	int stops = static_cast<int>(time) / sleeptime;
	for (int i = 1; i <= stops; i++) {
		if (i == 1) {
			fulltime = fulltime + 10;
		}
		else {
			fulltime = fulltime + 5;
		}
	}
	return fulltime;
}