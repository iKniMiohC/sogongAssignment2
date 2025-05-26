#include "RentBike.h"
#include "Member.h"
#include "Bike.h"
#include <iostream>

using namespace std;

RentBike::RentBike(MemberRepository* memberRepository, BikeRepository* bikeRepository)
 : memberRepository(memberRepository), bikeRepository(bikeRepository) {}

Bike* RentBike::rentBike(string bikeId) {
	Member* currentMember = memberRepository->getCurrentMember();
	vector<Bike*> bikeList = bikeRepository->getBikeList();

	
	vector<Bike*> rentedList = currentMember->getRentedBikeList();
			
	for(int j = 0; j < bikeList.size(); j++) {
		if(bikeList[j]->getBikeId() == bikeId) {
			rentedList.push_back(bikeList[j]);
			bikeList[j]->setRentMember(currentMember->getId());

			return bikeList[j];
		}
	}
}

