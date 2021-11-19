#include <string>
#include <iostream>
#include "motherboard.h"
#include "processor.h"
#include "ram.h"
#include "videocard.h"

using namespace std;

#pragma once

struct computer {
	string name = "Без названия";  //название компьютера
	processor processor;  //процессор
	ram ram;  //оперативная память
	videocard videocard;  //видеокарта
	motherboard motherboard;  //материнская плата
	int state = 0;  //состояние компбютера(0 - выключен)
};

computer init_computer(motherboard mb, processor p, ram r, videocard v, string name);  //создание компьютера
void turn_on_computer(computer *comp);  //включить компьютер
void turn_off_computer(computer *comp);  //выключить компьютер
void check_computer(computer comp);  //проверить и вывести состовляющие компьютера на экран
motherboard get_comp_motherboard(computer comp);  //ф-ция получения материнской платы
ram get_comp_ram(computer comp);  //ф-ция получения оперативной памяти
videocard get_comp_videocard(computer comp);  //ф-ция получения видеокарты
processor get_comp_processor(computer comp);  //ф-ция получения процессора
void set_comp_name(computer* comp, string name);  //ф-ция присвоения имени
void set_comp_motherboard(computer* comp, motherboard mb);  //ф-ция присвоения материнской платы
void set_comp_ram(computer* comp, ram r);  //ф-ция присвоения оперативной памяти
void set_comp_videocard(computer* comp, videocard v);  //ф-ция присвоения видеокарты
void set_comp_processor(computer* comp, processor p);  //ф-ция присвоения процессора