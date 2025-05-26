#ifndef REGISTERBIKE_H
#define REGISTERBIKE_H

#include <string>
#include "BikeRepository.h"

using namespace std;

class RegisterBike {

private:
	BikeRepository* bikeRepository;

public:
	void registerBike(string bikeId, string bikeName);

	RegisterBike(BikeRepository* bikeRepository);
};

#endif
