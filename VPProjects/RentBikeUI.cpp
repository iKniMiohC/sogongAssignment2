#include "RentBikeUI.h"
#include "RentBike.h"
#include <iostream>
#include <fstream>

using namespace std;

RentBikeUI::RentBikeUI(RentBike* control) : control(control) {}

void RentBikeUI::rentBike(string bikeId, ofstream& out) {
	Bike* rentBike = control->rentBike(bikeId);

	out << "4.1. 자전거 대여" << endl;
	out << "> " << rentBike->getBikeId() << " " << rentBike->getBikeName() << endl;
	out << endl;
}
