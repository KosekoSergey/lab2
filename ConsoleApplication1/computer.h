#include <string>
#include <iostream>
#include "motherboard.h"
#include "processor.h"
#include "ram.h"
#include "videocard.h"

using namespace std;

#pragma once

struct computer {
	string name = "��� ��������";  //�������� ����������
	processor processor;  //���������
	ram ram;  //����������� ������
	videocard videocard;  //����������
	motherboard motherboard;  //����������� �����
	int state = 0;  //��������� ����������(0 - ��������)
};

computer init_computer(motherboard mb, processor p, ram r, videocard v, string name);  //�������� ����������
void turn_on_computer(computer *comp);  //�������� ���������
void turn_off_computer(computer *comp);  //��������� ���������
void check_computer(computer comp);  //��������� � ������� ������������ ���������� �� �����
motherboard get_comp_motherboard(computer comp);  //�-��� ��������� ����������� �����
ram get_comp_ram(computer comp);  //�-��� ��������� ����������� ������
videocard get_comp_videocard(computer comp);  //�-��� ��������� ����������
processor get_comp_processor(computer comp);  //�-��� ��������� ����������
void set_comp_name(computer* comp, string name);  //�-��� ���������� �����
void set_comp_motherboard(computer* comp, motherboard mb);  //�-��� ���������� ����������� �����
void set_comp_ram(computer* comp, ram r);  //�-��� ���������� ����������� ������
void set_comp_videocard(computer* comp, videocard v);  //�-��� ���������� ����������
void set_comp_processor(computer* comp, processor p);  //�-��� ���������� ����������