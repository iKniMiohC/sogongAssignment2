#include "RentedBikeInfoUI.h"
#include "RentedBikeInfo.h"
#include <iostream>
#include <fstream>

using namespace std;

RentedBikeInfoUI::RentedBikeInfoUI(RentedBikeInfo* control) : control(control) {}

void RentedBikeInfoUI::rentedBikeInfo(ofstream& out) {

	vector<Bike*> rentedBikeList = control->rentedBikeInfo();

	out << "5.1. 자전거 대여 리스트" << endl;
	for(Bike* bike : rentedBikeList) {
		out << "> " << bike->getBikeId() << " " << bike->getBikeName() << endl;
	}
	out << endl;
}
