#include "BikeRepository.h"
#include <vector>

using namespace std;

void BikeRepository::addBike(Bike* bike) {
	bikeList.push_back(bike);
}

vector<Bike*> BikeRepository::getBikeList() {
	return this->bikeList;
}
