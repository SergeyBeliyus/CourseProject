#include "CourseProjectDLL/ts.h"
#include "CourseProjectDLL/camel.h"
#include "CourseProjectDLL/fast_camel.h"
#include "CourseProjectDLL/kentaurus.h"
#include "CourseProjectDLL/boots.h"
#include "CourseProjectDLL/broom.h"
#include "CourseProjectDLL/eagle.h"
#include "CourseProjectDLL/carpet.h"
#include "windows.h"

enum class Selection {finish, regTS, startRace};

int greet() {
	int type;
	std::cout << "1: √онка дл€ наземного транспорта" << std::endl;
	std::cout << "2: √онка дл€ воздушного транспорта" << std::endl;
	std::cout << "3: √онка дл€ назменого и воздушного транспорта" << std::endl;
	std::cout << "¬ыберите тип гонки: ";
	std::cin >> type;
	return type;
}

float set_km() {
	system("cls");
	float km;
	bool pos_km = false;
	while (!pos_km) {
		std::cout << "”кажите дистанцию (должна быть положительна): ";
		std::cin >> km;
		if (km <= 0) {
			system("cls");
			std::cout << "ƒистанци€ должна быть положительна и не равна 0" << std::endl;
		}
		else {
			pos_km = true;
		}
	}
	return km;
}

bool isAnyActive(TS* TS1, TS* TS2, TS* TS3, TS* TS4, TS* TS5, TS* TS6, TS* TS7) {
	if (TS1->getActive() || TS2->getActive() || TS3->getActive() || TS4->getActive() || TS5->getActive() || TS6->getActive() || TS7->getActive()) {
		return true;
	}
	else {
		return false;
	}
}

void printActive(TS* TS1, TS* TS2, TS* TS3, TS* TS4, TS* TS5, TS* TS6, TS* TS7) {
	if (TS1->getActive()) {
		std::cout << TS1->name;
	}
	if (TS2->getActive()) {
		std::cout << "  " << TS2->name;
	}
	if (TS3->getActive()) {
		std::cout << "  " << TS3->name;
	}
	if (TS4->getActive()) {
		std::cout << "  " << TS4->name;
	}
	if (TS5->getActive()) {
		std::cout << "  " << TS5->name;
	}
	if (TS6->getActive()) {
		std::cout << "  " << TS6->name;
	}
	if (TS7->getActive()) {
		std::cout << "  " << TS7->name;
	}
	std::cout << std::endl;
}

int getActive(TS* TS1, TS* TS2, TS* TS3, TS* TS4, TS* TS5, TS* TS6, TS* TS7) {
	int number = 0;
	if (TS1->getActive()) {
		number++;
	}
	if (TS2->getActive()) {
		number++;
	}
	if (TS3->getActive()) {
		number++;
	}
	if (TS4->getActive()) {
		number++;
	}
	if (TS5->getActive()) {
		number++;
	}
	if (TS6->getActive()) {
		number++;
	}
	if (TS7->getActive()) {
		number++;
	}
	return number;
}


void settingActive(int input, int type, TS* TS1, TS* TS2, TS* TS3, TS* TS4, TS* TS5, TS* TS6, TS* TS7) {
	system("cls");
	switch (input) {
	case 1:
		if (type != TS1->type && type != 3) {
			std::cout << "ѕопытка зарегистрировать неправильный тип транспортного средства" << std::endl;
		}
		else {
			TS1->setActive();
			std::cout << TS1->name << " успешно зарегистрирован" << std::endl;
		}
		break;
	case 2:
		if (type != TS2->type && type != 3) {
			std::cout << "ѕопытка зарегистрировать неправильный тип транспортного средства" << std::endl;
		}
		else {
			TS2->setActive();
			std::cout << TS2->name << " успешно зарегистрирован" << std::endl;
		}
		break;
	case 3:
		if (type != TS3->type && type != 3) {
			std::cout << "ѕопытка зарегистрировать неправильный тип транспортного средства" << std::endl;
		}
		else {
			TS3->setActive();
			std::cout << TS3->name << " успешно зарегистрирован" << std::endl;
		}
		break;
	case 4:
		if (type != TS4->type && type != 3) {
			std::cout << "ѕопытка зарегистрировать неправильный тип транспортного средства" << std::endl;
		}
		else {
			TS4->setActive();
			std::cout << TS4->name << " успешно зарегистрирован" << std::endl;
		}
		break;
	case 5:
		if (type != TS5->type && type != 3) {
			std::cout << "ѕопытка зарегистрировать неправильный тип транспортного средства" << std::endl;
		}
		else {
			TS5->setActive();
			std::cout << TS5->name << " успешно зарегистрирован" << std::endl;
		}
		break;
	case 6:
		if (type != TS6->type && type != 3) {
			std::cout << "ѕопытка зарегистрировать неправильный тип транспортного средства" << std::endl;
		}
		else {
			TS6->setActive();
			std::cout << TS6->name << " успешно зарегистрирован" << std::endl;
		}
		break;
	case 7:
		if (type != TS7->type && type != 3) {
			std::cout << "ѕопытка зарегистрировать неправильный тип транспортного средства" << std::endl;
		}
		else {
			TS7->setActive();
			std::cout << TS7->name << " успешно зарегистрирован" << std::endl;
		}
		break;
	default:
		break;
	}
}

void raceResults(int racersNum, TS* TS1, TS* TS2, TS* TS3, TS* TS4, TS* TS5, TS* TS6, TS* TS7) {
	system("cls");
	int number = 1;
	std::string name;
	float result;
	TS* Min = TS1;
	std::cout << "–езультаты гонки:" << std::endl;

	while (racersNum != 0) {
		bool first = true;
		if (TS1->getActive() && first) {
			Min = TS1;
		}
		if (TS2->getActive() && first) {
			Min = TS2;
		}
		if (TS3->getActive() && first) {
			Min = TS3;
		}
		if (TS4->getActive() && first) {
			Min = TS4;
		}
		if (TS5->getActive() && first) {
			Min = TS5;
		}
		if (TS6->getActive() && first) {
			Min = TS6;
		}
		if (TS7->getActive() && first) {
			Min = TS7;
		}

		if (TS1->getActive() && TS1->getTime() <= Min->getTime()) {
			Min = TS1;
		}
		if (TS2->getActive() && TS2->getTime() <= Min->getTime()) {
			Min = TS2;
		}
		if (TS3->getActive() && TS3->getTime() <= Min->getTime()) {
			Min = TS3;
		}
		if (TS4->getActive() && TS4->getTime() <= Min->getTime()) {
			Min = TS4;
		}
		if (TS5->getActive() && TS5->getTime() <= Min->getTime()) {
			Min = TS5;
		}
		if (TS6->getActive() && TS6->getTime() <= Min->getTime()) {
			Min = TS6;
		}
		if (TS7->getActive() && TS7->getTime() <= Min->getTime()) {
			Min = TS7;
		}

		Min->clearActive();
		name = Min->name;
		result = Min->getTime();

		std::cout << number << ". " << name << ". ¬рем€: " << result << std::endl;
		
		number++;
		racersNum--;
	}
}

int main() {
	Selection FINISH = Selection::finish;
	Selection REGTS = Selection::regTS;
	Selection STARTRACE = Selection::startRace;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	bool play = true;

	while (play) {
		std::cout << "ƒобро пожаловать в гоночный симул€тор!" << std::endl;

		int type = greet();
		float km = set_km();

		Camel camel(km);
		FastCamel fastCamel(km);
		Kentaurus kentaurus(km);
		Boots boots(km);
		Broom broom(km);
		Eagle eagle(km);
		Carpet carpet(km);
		int racersNum = 0;
		bool all_set = false;
		int userSelect = 0;
		while (userSelect != static_cast<int>(STARTRACE)) {
			system("cls");
			racersNum = getActive(&boots, &broom, &camel, &kentaurus, &eagle, &fastCamel, &carpet);

			if (racersNum < 2) {
				std::cout << "ƒолжно быть зарегистрировано хот€ бы 2 транспортных средства" << std::endl;
			}

			std::cout << "1. «арегистрировать транспорт" << std::endl;

			if (racersNum >= 2) {
				std::cout << "2. Ќачать гонку" << std::endl;
				all_set = true;
			}

			std::cout << "¬ыберите действие: ";
			std::cin >> userSelect;
			system("cls");

			while (userSelect != static_cast<int>(FINISH) && !all_set) {
				if (type == 1) {
					std::cout << "√онка дл€ наземного транспорта. ";
				}
				else if (type == 2) {
					std::cout << "√онка дл€ воздушного транспорта. ";
				}
				else {
					std::cout << "√онка дл€ наземного и воздушного транспорта. ";
				}
				std::cout << "–ассто€ние: " << km << std::endl;

				if (isAnyActive(&boots, &broom, &camel, &kentaurus, &eagle, &fastCamel, &carpet)) {
					std::cout << "«арегистрированные транспортные средства: ";
					printActive(&boots, &broom, &camel, &kentaurus, &eagle, &fastCamel, &carpet);
				}
				
				std::cout << "1. " << boots.name << std::endl;
				std::cout << "2. " << broom.name << std::endl;
				std::cout << "3. " << camel.name << std::endl;
				std::cout << "4. " << kentaurus.name << std::endl;
				std::cout << "5. " << eagle.name << std::endl;
				std::cout << "6. " << fastCamel.name << std::endl;
				std::cout << "7. " << carpet.name << std::endl;
				std::cout << "0. " << "«акончить регистрацию" << std::endl;
				std::cout << "¬ыберите транспорт или 0 дл€ окончани€ процесса регистрации: ";
				std::cin >> userSelect;

				settingActive(userSelect, type, &boots, &broom, &camel, &kentaurus, &eagle, &fastCamel, &carpet);
			}
		}

		raceResults(racersNum, &boots, &broom, &camel, &kentaurus, &eagle, &fastCamel, &carpet);

		std::cout << std::endl;
		std::cout << "1. ѕроверсти еще одну гонку" << std::endl;
		std::cout << "2. ¬ыйти" << std::endl;
		std::cout << "¬ыберите действие: ";
		std::cin >> userSelect;
		
		if (userSelect == static_cast<int>(REGTS)) {
			system("cls");
			continue;
		}
		else {
			system("cls");
			play = false;
		}
	}
}