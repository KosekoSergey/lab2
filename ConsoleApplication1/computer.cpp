#include "computer.h"

computer init_computer(motherboard mb, processor p, ram r, videocard v, string name) {  //�������� ����������
	computer comp;
	comp.state = 0;
	comp.videocard = v;
	comp.ram = r;
	comp.motherboard = mb;
	comp.processor = p;
	comp.name = name;
	return comp;
}

void turn_on_computer(computer *comp) {  //�������� ���������
	if (!comp->state) { comp->state = 1; cout << "��������� �������: " << comp->name << endl; }
	else cout << "��������� ��� �������: " << comp->name << endl;
}

void turn_off_computer(computer *comp) {  //��������� ���������
	if (comp->state) { comp->state = 0; cout << "��������� ��������: " << comp->name << endl; }
}

void check_computer(computer comp) {  //��������� � ������� ������������ ���������� �� �����
	if (comp.state) {
		cout << "���������: " << comp.name << endl;
		cout << "�������� ���������� � �� ��������������:" << endl;
		if (check_motherboard(comp.motherboard)) print_motherboard(comp.motherboard);
		else cout << "����������� ����� �����������" << endl;
		if (check_processor(comp.processor)) print_processor(comp.processor);
		else cout << "��������� �����������" << endl;
		if (check_ram(comp.ram)) print_ram(comp.ram);
		else cout << "����������� ������ �����������" << endl;
		if (check_videocard(comp.videocard)) print_videocard(comp.videocard);
		else cout << "���������� �����������" << endl;
		cout << endl;
	}
} 

motherboard get_comp_motherboard(computer comp) {  //�-��� ��������� ����������� �����
	return comp.motherboard;
}

ram get_comp_ram(computer comp) {  //�-��� ��������� ����������� ������
	return comp.ram;
}

videocard get_comp_videocard(computer comp) {  //�-��� ��������� ����������
	return comp.videocard;
}

processor get_comp_processor(computer comp) {  //�-��� ��������� ����������
	return comp.processor;
}

void set_comp_name(computer* comp, string name) {  //�-��� ���������� �����
	comp->name = name;
}

void set_comp_motherboard(computer* comp, motherboard mb) {  //�-��� ���������� ����������� �����
	comp->motherboard = mb;
}

void set_comp_ram(computer* comp, ram r) {  //�-��� ���������� ����������� ������
	comp->ram = r;
}

void set_comp_videocard(computer* comp, videocard v) {  //�-��� ���������� ����������
	comp->videocard = v;
}

void set_comp_processor(computer* comp, processor p) {  //�-��� ���������� ����������
	comp->processor = p;
}