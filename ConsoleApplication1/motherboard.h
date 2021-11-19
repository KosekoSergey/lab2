#include <string>
#include <iostream>

using namespace std;

#pragma once

struct motherboard {
	string name;  //название материнской платы
	int rate = 0;  //чатсота
	int num_of_slots = 0;  //кол-во разъемов
};

motherboard init_motherboard(string name, int rate, int slots);  //создание материнской платы
int check_motherboard(motherboard mb);  //проверка
void print_motherboard(motherboard mb);  //вывод на экран характеристик
string get_motherboard_name(motherboard mb);  //ф-ция получения названия
int get_motherboard_rate(motherboard mb);  //частоты
int get_motherboard_slots(motherboard mb);  //кол-ва разъемов
void set_motherboard_name(motherboard *mb, string name);  //ф-ция присвоения названия
void set_motherboard_rate(motherboard *mb, int rate);  //частоты
void set_motherboard_slots(motherboard *mb, int slots);  //кол-ва разъемов