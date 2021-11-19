#include <string>
#include <iostream>

using namespace std;

#pragma once

struct videocard {
	string name;  //название видеокарты
	int rate = 0; //частота
	int memory = 0;  //объем видеопамяти
};

videocard init_videocard(string name, int rate, int memory);  //создание видеокарты
int check_videocard(videocard v);  //проверка видеокарты
void print_videocard(videocard v);  //вывод на экран характеристик
string get_videocard_name(videocard v);  //ф-ция получения названия видеокарты
int get_videocard_rate(videocard v);  //частоты
int get_videocard_memory(videocard v);  //объема видеопамяти
void set_videocard_name(videocard* v, string name);  //ф-ция присвоения названия видеокарты
void set_videocard_rate(videocard* v, int rate);  //частоты
void set_videocard_memory(videocard* v, int memory);  //объема видеопамяти