#include "processor.h"

processor init_processor(string name, int rate, int bitness) {  //создание процессора
	processor proc;
	proc.name = name;
	proc.bitness = bitness;
	proc.rate = rate;
	return proc;
}

int check_processor(processor p) {  //проверка
	if (p.name.length() != 0) return 1;
	else return 0;
}

void print_processor(processor p) {  //вывод на экран характеристик
	cout << "Название процессора: " << p.name << endl;
	cout << "Частота процессора: " << p.rate << endl;
	cout << "Разрядность процессора: " << p.bitness << endl;
}

string get_processor_name(processor p) {  //ф-ция получения названия
	return p.name;
}

int get_processor_rate(processor p) {  //частоты
	return p.rate;
}

int get_processor_bitness(processor p) {  //разрядности
	return p.bitness;
}

void set_processor_name(processor* p, string name) {  //ф-ция присвоения названия
	p->name = name;
}

void set_processor_rate(processor* p, int rate) {  //частоты
	p->rate = rate;
}

void set_processor_bitness(processor* p, int bitness) {  //разрядности
	p->bitness = bitness;
}