#include "MemberRepository.h"
#include <vector>

using namespace std;

void MemberRepository::addMember(Member* member) {
	memberList.push_back(member);
}

vector<Member*> MemberRepository::getMemberList() {
	return this->memberList;
}

void MemberRepository::setCurrentMember(Member* member) {
	this->currentMember = member;
}

Member* MemberRepository::getCurrentMember() {
	return this->currentMember;
}
