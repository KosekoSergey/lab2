#include "computer.h"

computer init_computer(motherboard mb, processor p, ram r, videocard v, string name) {  //создание компьютера
	computer comp;
	comp.state = 0;
	comp.videocard = v;
	comp.ram = r;
	comp.motherboard = mb;
	comp.processor = p;
	comp.name = name;
	return comp;
}

void turn_on_computer(computer *comp) {  //включить компьютер
	if (!comp->state) { comp->state = 1; cout << "Компьютер включен: " << comp->name << endl; }
	else cout << "Компьютер уже включен: " << comp->name << endl;
}

void turn_off_computer(computer *comp) {  //выключить компьютер
	if (comp->state) { comp->state = 0; cout << "Компьютер выключен: " << comp->name << endl; }
}

void check_computer(computer comp) {  //проверить и вывести состовляющие компьютера на экран
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
		cout << endl;
	}
} 

motherboard get_comp_motherboard(computer comp) {  //ф-ция получения материнской платы
	return comp.motherboard;
}

ram get_comp_ram(computer comp) {  //ф-ция получения оперативной памяти
	return comp.ram;
}

videocard get_comp_videocard(computer comp) {  //ф-ция получения видеокарты
	return comp.videocard;
}

processor get_comp_processor(computer comp) {  //ф-ция получения процессора
	return comp.processor;
}

void set_comp_name(computer* comp, string name) {  //ф-ция присвоения имени
	comp->name = name;
}

void set_comp_motherboard(computer* comp, motherboard mb) {  //ф-ция присвоения материнской платы
	comp->motherboard = mb;
}

void set_comp_ram(computer* comp, ram r) {  //ф-ция присвоения оперативной памяти
	comp->ram = r;
}

void set_comp_videocard(computer* comp, videocard v) {  //ф-ция присвоения видеокарты
	comp->videocard = v;
}

void set_comp_processor(computer* comp, processor p) {  //ф-ция присвоения процессора
	comp->processor = p;
}