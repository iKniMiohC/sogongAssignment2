#ifndef RENTEDBIKEINFO_H
#define RENTEDBIKEINFO_H

#include <string>
#include "MemberRepository.h"

using namespace std;

class RentedBikeInfo {

private:
	MemberRepository* memberRepository;

public:
	vector<Bike*> rentedBikeInfo();

	RentedBikeInfo(MemberRepository* memberRepository);
};

#endif
