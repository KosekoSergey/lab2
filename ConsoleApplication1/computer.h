#include <string>
#include <iostream>
#include "motherboard.h"
#include "processor.h"
#include "ram.h"
#include "videocard.h"

using namespace std;

#pragma once

struct computer {
	string name;
	processor processor;
	ram ram;
	videocard videocard;
	motherboard motherboard;
	int state;
};

computer init_computer(motherboard mb, processor p, ram r, videocard v, string name);
void turn_on_computer(computer *comp);
void turn_off_computer(computer *comp);
void check_computer(computer comp);