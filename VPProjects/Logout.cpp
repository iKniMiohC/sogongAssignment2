#include "Logout.h"
#include <iostream>

using namespace std;

Logout::Logout(MemberRepository* memberRepository) : memberRepository(memberRepository) {}

Member* Logout::systemEnd() {
	
	Member* logoutMember = memberRepository->getCurrentMember();
	memberRepository->setCurrentMember(nullptr);
	return logoutMember;
}
