#include <string>
#include <iostream>

using namespace std;

#pragma once

struct processor {
	string name;
	int rate;
	int bitness;
};

processor init_processor(string name, int rate, int bitness);
int check_processor(processor p);
void print_processor(processor p);
string get_processor_name(processor p);
int get_processor_rate(processor p);
int get_processor_bitness(processor p);
void set_processor_name(processor *p, string name);
void set_processor_rate(processor* p, int rate);
void set_processor_bitness(processor* p, int bitness);