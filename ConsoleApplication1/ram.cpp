#include "ram.h"

ram init_ram(string name, int rate, int memory) {  //создание оперативной памяти
	ram ram;
	ram.name = name;
	ram.rate = rate;
	ram.memory = memory;
	return ram;
}

int check_ram(ram r) {  //проверка
	if (r.name.length() != 0) return 1;
	else return 0;
}

void print_ram(ram r) {  //вывод на экран характеристик
	cout << "Название оперативной памяти: " << r.name << endl;
	cout << "Частота оперативной памяти: " << r.rate << endl;
	cout << "Объем оперативной памяти: " << r.memory << endl;
}

string get_ram_name(ram r) {  //ф-ция получения названия
	return r.name;
}

int get_ram_rate(ram r) {  //частоты
	return r.rate;
}

int get_ram_memory(ram r) {  //объема памяти
	return r.memory; 
}

void set_ram_name(ram* r, string name) {  //ф-ция присвоения названия
	r->name = name;
}

void set_ram_rate(ram* r, int rate) {  //частоты
	r->rate = rate;
}

void set_ram_memory(ram* r, int memory) {  //объема памяти
	r->memory = memory;
}