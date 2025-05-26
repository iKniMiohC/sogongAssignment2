#ifndef LOGOUT_H
#define LOGOUT_H

#include <string>
#include "MemberRepository.h"

using namespace std;

class Logout {

private:
	MemberRepository* memberRepository;

public:

	Logout(MemberRepository* memberRepository);

	Member* systemEnd();
};

#endif
