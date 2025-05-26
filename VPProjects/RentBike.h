#ifndef RENTBIKE_H
#define RENTBIKE_H

#include <string>
#include "MemberRepository.h"
#include "BikeRepository.h"

using namespace std;

class RentBike {

private:
	BikeRepository* bikeRepository;
	MemberRepository* memberRepository;

public:
	Bike* rentBike(string bikeId);

	RentBike(MemberRepository* memberRepository, BikeRepository* bikeRepository);
};

#endif
