#include "RegisterBike.h"
#include "Bike.h"
#include <iostream>

using namespace std;

RegisterBike::RegisterBike(BikeRepository* bikeRepository) : bikeRepository(bikeRepository) {}

void RegisterBike::registerBike(string bikeId, string bikeName) {
	Bike* newBike = new Bike(bikeId, bikeName);
    bikeRepository->addBike(newBike);
}


