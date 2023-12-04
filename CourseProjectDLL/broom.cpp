#include "broom.h"

Broom::Broom(float km) {
	name = "Метла";
	type = 2;
	speed = 10;
	this->km = km;
}

float Broom::getTime() {
	float newkm = 0;
	float fulltime = 0;
	int percent = 0;

	percent = static_cast<int>(km / 1000);
	newkm = km - (km * (static_cast<float>(percent) / 100));
	fulltime = newkm / static_cast<float>(speed);
	return fulltime;
}