#include "RegisterBikeUI.h"
#include "RegisterBike.h"
#include <iostream>
#include <fstream>

using namespace std;

RegisterBikeUI::RegisterBikeUI(RegisterBike* control) : control(control) {}

void RegisterBikeUI::registerBike(string bikeId, string bikeName, ofstream& out) {
	
	out << "3.1. 자전거 등록" << endl;
	out << "> " << bikeId << " " << bikeName << endl;
	out << endl;

	control-> registerBike(bikeId, bikeName);	
}
