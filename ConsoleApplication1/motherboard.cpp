#include "motherboard.h"

motherboard init_motherboard(string name, int rate, int slots) {
	motherboard mb;
	mb.name = name;
	mb.num_of_slots = slots;
	mb.rate = rate;
	return mb;
}

int check_motherboard(motherboard mb) {
	if (mb.name.length() != 0) return 1;
	else return 0;
}

void print_motherboard(motherboard mb) {
	cout << "Название материнской платы: " << mb.name << endl;
	cout << "Частота шины: " << mb.rate << endl;
	cout << "Количество основных разъемов: " << mb.num_of_slots << endl;
}

string get_motherboard_name(motherboard mb) {
	return mb.name;
}

int get_motherboard_rate(motherboard mb) {
	return mb.rate;
}

int get_motherboard_slots(motherboard mb) {
	return mb.num_of_slots;
}

void set_motherboard_name(motherboard *mb, string name) {
	mb->name = name;
}

void set_motherboard_rate(motherboard *mb, int rate) {
	mb->rate = rate;
}

void set_motherboard_slots(motherboard *mb, int slots) {
	mb->num_of_slots = slots;
}