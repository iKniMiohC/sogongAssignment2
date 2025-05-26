#ifndef BIKEREPOSITORY_H
#define BIKEREPOSITORY_H

#include "Bike.h"
#include <vector>

class BikeRepository {

private:
	vector<Bike*> bikeList;

public:
	void addBike(Bike* bike);

	vector<Bike*> getBikeList();
};

#endif
