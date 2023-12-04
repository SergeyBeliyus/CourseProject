#include "ts.h"

TS::TS() {
	name = "Базовый транспорт";
	type = 0;
	speed = 0;
	km = 0;
}

float TS::getTime(){
	return 0;
}

void TS::setActive() {
	active = true;
	return;
}

void TS::clearActive() {
	active = false;
	return;
}

bool TS::getActive() {
	return active;
}