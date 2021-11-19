#include <string>
#include <iostream>

using namespace std;

#pragma once

struct ram {
	string name;
	int memory;
	int rate;
};

ram init_ram(string name, int rate, int memory);
int check_ram(ram r);
void print_ram(ram r);
string get_ram_name(ram r);
int get_ram_rate(ram r);
int get_ram_memory(ram r);
void set_ram_name(ram* r, string name);
void set_ram_rate(ram* r, int rate);
void set_ram_memory(ram* r, int memory);