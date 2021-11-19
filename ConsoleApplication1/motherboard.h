#include <string>
#include <iostream>

using namespace std;

#pragma once

struct motherboard {
	string name;
	int rate;
	int num_of_slots;
};

motherboard init_motherboard(string name, int rate, int slots);
int check_motherboard(motherboard mb);
void print_motherboard(motherboard mb);
string get_motherboard_name(motherboard mb);
int get_motherboard_rate(motherboard mb);
int get_motherboard_slots(motherboard mb);
void set_motherboard_name(motherboard *mb, string name);
void set_motherboard_rate(motherboard *mb, int rate);
void set_motherboard_slots(motherboard *mb, int slots);