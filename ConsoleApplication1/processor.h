#include <string>
#include <iostream>

using namespace std;

#pragma once

struct processor {
	string name;  //название процессора
	int rate = 0;  //частота
	int bitness = 0;  //разрядность процессора
};

processor init_processor(string name, int rate, int bitness);  //создание процессора
int check_processor(processor p);  //проверка
void print_processor(processor p);  //вывод на экран характеристик
string get_processor_name(processor p);  //ф-ция получения названия
int get_processor_rate(processor p);  //частоты
int get_processor_bitness(processor p);  //разрядности
void set_processor_name(processor *p, string name);  //ф-ция присвоения названия
void set_processor_rate(processor* p, int rate);  //частоты
void set_processor_bitness(processor* p, int bitness);  //разрядности