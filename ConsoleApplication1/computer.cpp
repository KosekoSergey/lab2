#include "computer.h"

computer init_computer(motherboard mb, processor p, ram r, videocard v, string name) {
	computer comp;
	comp.state = 0;
	comp.videocard = v;
	comp.ram = r;
	comp.motherboard = mb;
	comp.processor = p;
	comp.name = name;
	return comp;
}

void turn_on_computer(computer *comp) {
	if (!comp->state) { comp->state = 1; cout << "Компьютер включен" << endl; }
	else cout << "Компьютер уже включен" << endl;
}

void turn_off_computer(computer *comp) {
	if (comp->state) { comp->state = 0; cout << "Компьютер выключен" << endl; }
}

void check_computer(computer comp) {
	if (comp.state) {
		cout << "Компьютер: " << comp.name << endl;
		cout << "Основные компоненты и их характеристики:" << endl;
		if (check_motherboard(comp.motherboard)) print_motherboard(comp.motherboard);
		else cout << "Материнская плата отсутствует" << endl;
		if (check_processor(comp.processor)) print_processor(comp.processor);
		else cout << "Процессор отсутствует" << endl;
		if (check_ram(comp.ram)) print_ram(comp.ram);
		else cout << "Оперативная память отсутствует" << endl;
		if (check_videocard(comp.videocard)) print_videocard(comp.videocard);
		else cout << "Видеокарта отсутствует" << endl;
	}
} 