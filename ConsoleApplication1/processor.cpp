#include "processor.h"

processor init_processor(string name, int rate, int bitness) {
	processor proc;
	proc.name = name;
	proc.bitness = bitness;
	proc.rate = rate;
	return proc;
}

int check_processor(processor p) {
	if (p.name.length() != 0) return 1;
	else return 0;
}

void print_processor(processor p) {
	cout << "Название процессора: " << p.name << endl;
	cout << "Частота процессора: " << p.rate << endl;
	cout << "Разрядность процессора: " << p.bitness << endl;
}

string get_processor_name(processor p) {
	return p.name;
}

int get_processor_rate(processor p) {
	return p.rate;
}

int get_processor_bitness(processor p) {
	return p.bitness;
}

void set_processor_name(processor* p, string name) {
	p->name = name;
}

void set_processor_rate(processor* p, int rate) {
	p->rate = rate;
}

void set_processor_bitness(processor* p, int bitness) {
	p->bitness = bitness;
}