#include "RentedBikeInfo.h"
#include "Member.h"
#include <iostream>

using namespace std;

RentedBikeInfo::RentedBikeInfo(MemberRepository* memberRepository) : memberRepository(memberRepository) {}

vector<Bike*> RentedBikeInfo::rentedBikeInfo() {
	
	Member* currentMember = memberRepository->getCurrentMember();

	return currentMember->getRentedBikeList();
}
