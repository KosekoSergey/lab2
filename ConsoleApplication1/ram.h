#include <string>
#include <iostream>

using namespace std;

#pragma once

struct ram {
	string name;  //название оперативной пам€ти
	int memory = 0;  // кол-во оперативной пам€ти
	int rate = 0;  //частота
};

ram init_ram(string name, int rate, int memory);  //создание оперативной пам€ти
int check_ram(ram r);  //проверка
void print_ram(ram r); //вывод на экран характеристик
string get_ram_name(ram r);  //ф-ци€ получени€ названи€
int get_ram_rate(ram r);  //частоты
int get_ram_memory(ram r);  //объема пам€ти
void set_ram_name(ram* r, string name);  //ф-ци€ присвоени€ названи€
void set_ram_rate(ram* r, int rate);  //частоты
void set_ram_memory(ram* r, int memory);  //объема пам€ти