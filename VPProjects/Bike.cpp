#include "Bike.h"
#include <string>

using namespace std;

Bike::Bike(string bikeId, string bikeName) {
	this -> bikeId = bikeId;
	this -> bikeName = bikeName;
}

string Bike::getBikeId() {
	return this->bikeId;
}

string Bike::getBikeName() {
	return this->bikeName;
}

string Bike::getRentMember() {
	return this->rentMember;
}

void Bike::setRentMember(string memberId) {
	this->rentMember = memberId;
}