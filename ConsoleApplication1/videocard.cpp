#include "videocard.h"

videocard init_videocard(string name, int rate, int memory) {  //создание видеокарты
	videocard vid;
	vid.name = name;
	vid.rate = rate;
	vid.memory = memory;
	return vid;
}

int check_videocard(videocard v) {  //проверка видеокарты
	if (v.name.length() != 0) return 1;
	else return 0;
}

void print_videocard(videocard v) {  //вывод на экран характеристик
	cout << "Название видеокарты: " << v.name << endl;
	cout << "Частота видеокарты: " << v.rate << endl;
	cout << "Объем видеопамяти: " << v.memory << endl;
}

string get_videocard_name(videocard v) {  //ф-ция получения названия видеокарты
	return v.name;
}

int get_videocard_rate(videocard v) {  //частоты
	return v.rate;
}

int get_videocard_memory(videocard v) {  //объема видеопамяти
	return v.memory;
}

void set_videocard_name(videocard* v, string name) {  //ф-ция присвоения названия видеокарты
	v->name = name; 
}

void set_videocard_rate(videocard* v, int rate) {  //частоты
	v->rate = rate;
}

void set_videocard_memory(videocard* v, int memory) {    //объема видеопамяти
	v->memory = memory;
}