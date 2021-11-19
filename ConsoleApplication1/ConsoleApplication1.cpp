#include <string>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include "computer.h"
#include "processor.h"
#include "ram.h"
#include "videocard.h"
#include "motherboard.h"
using namespace::std;

int main()
{
    SetConsoleCP(866);
    SetConsoleOutputCP(866);
    setlocale(LC_ALL, "Rus");
    ram ram1;
    videocard vc1;
    motherboard mb1;
    processor proc1;
    computer comp[2];

    mb1 = init_motherboard("Материнская плата-1", 1200, 8);
    proc1 = init_processor("Видеокарта-1", 3200, 64);
    ram1 = init_ram("Оперативная память-1", 1600, 8);
    vc1 = init_videocard("Видеокарта-1", 2400, 2);
    comp[0] = init_computer(mb1, proc1, ram1, vc1, "Компьютер-1");  //создание 1 компьютера
    turn_on_computer(&comp[0]);  //включение 1 компьютера
    check_computer(comp[0]);  //проверка 1 компьютера
    turn_on_computer(&comp[1]);  //включение 2 компьютера
    check_computer(comp[1]);  //проверка 2 компьютера
    set_comp_processor(&comp[1], proc1);  //присвоение процессора 1 компьютеру 2
    set_ram_rate(&ram1, 2200);  //изменение характеристик оперативной памяти 1
    set_comp_ram(&comp[1], ram1);  //присвоение оперативной памяти 1 компьютеру 2
    check_computer(comp[0]);  //проверка 1 компьютера
    check_computer(comp[1]);  //проверка 2 компьютера
}
