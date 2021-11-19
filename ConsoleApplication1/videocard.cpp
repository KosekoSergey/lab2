#include "videocard.h"

videocard init_videocard(string name, int rate, int memory) {
	videocard vid;
	vid.name = name;
	vid.rate = rate;
	vid.memory = memory;
	return vid;
}

int check_videocard(videocard v) {
	if (v.name.length() != 0) return 1;
	else return 0;
}

void print_videocard(videocard v) {
	cout << "Название видеокарты: " << v.name << endl;
	cout << "Частота видеокарты: " << v.rate << endl;
	cout << "Объем видеопамяти: " << v.memory << endl;
}

string get_videocard_name(videocard v) {
	return v.name;
}

int get_videocard_rate(videocard v) {
	return v.rate;
}

int get_videocard_memory(videocard v) {
	return v.memory;
}

void set_videocard_name(videocard* v, string name) {
	v->name = name;
}

void set_videocard_rate(videocard* v, int rate) {
	v->rate = rate;
}

void set_videocard_memory(videocard* v, int memory) {
	v->memory = memory;
}