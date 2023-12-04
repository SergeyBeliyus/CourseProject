#include "eagle.h"

Eagle::Eagle(float km) {
	name = "Îð¸ë";
	type = 2;
	speed = 8;
	this->km = km;
}

float Eagle::getTime() {
	float newkm = 0;
	float fulltime = 0;
	newkm = km - static_cast<float>((static_cast<double>(km) * 0.06));
	fulltime = newkm / static_cast<float>(speed);
	return fulltime;
}