#include <string>
#include <iostream>

using namespace std;

#pragma once

struct videocard {
	string name;
	int rate;
	int memory;
};

videocard init_videocard(string name, int rate, int memory);
int check_videocard(videocard v);
void print_videocard(videocard v);
string get_videocard_name(videocard v);
int get_videocard_rate(videocard v);
int get_videocard_memory(videocard v);
void set_videocard_name(videocard* v, string name);
void set_videocard_rate(videocard* v, int rate);
void set_videocard_memory(videocard* v, int memory);