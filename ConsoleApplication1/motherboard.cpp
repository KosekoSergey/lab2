#include "motherboard.h"

motherboard init_motherboard(string name, int rate, int slots) {  //создание материнской платы
	motherboard mb;
	mb.name = name;
	mb.num_of_slots = slots;
	mb.rate = rate;
	return mb;
}

int check_motherboard(motherboard mb) {  //проверка
	if (mb.name.length() != 0) return 1;
	else return 0;
}

void print_motherboard(motherboard mb) {  //вывод на экран характеристик
	cout << "Название материнской платы: " << mb.name << endl;
	cout << "Частота шины: " << mb.rate << endl;
	cout << "Количество основных разъемов: " << mb.num_of_slots << endl;
}

string get_motherboard_name(motherboard mb) {  //ф-ция получения названия
	return mb.name;
}

int get_motherboard_rate(motherboard mb) {  //частоты
	return mb.rate;
}

int get_motherboard_slots(motherboard mb) {  //кол-ва разъемов
	return mb.num_of_slots;
}

void set_motherboard_name(motherboard *mb, string name) {  //ф-ция присвоения названия
	mb->name = name;
}

void set_motherboard_rate(motherboard *mb, int rate) {  //частоты
	mb->rate = rate;
}

void set_motherboard_slots(motherboard *mb, int slots) {  //кол-ва разъемов
	mb->num_of_slots = slots;
}