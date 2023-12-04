#include "carpet.h"

Carpet::Carpet(float km) {
	name = "Ковёр-самолет";
	type = 2;
	speed = 10;
	this->km = km;
}

float Carpet::getTime() {
	float newkm = 0;
	float fulltime = 0;
	if (km >= 1000 && km < 5000) {
		newkm = km - static_cast<float>((static_cast<double>(km) * 0.03));
	}
	else if (km >= 5000 && km < 10000) {
		newkm = km - static_cast<float>((static_cast<double>(km) * 0.1));
	}
	else if (km >= 10000) {
		newkm = km - static_cast<float>((static_cast<double>(km) * 0.05));
	}
	else {
		newkm = km;
	}
	fulltime = newkm / static_cast<float>(speed);
	return fulltime;
}