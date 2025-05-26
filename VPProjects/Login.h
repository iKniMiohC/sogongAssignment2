#ifndef LOGIN_H
#define LOGIN_H

#include <string>
#include "MemberRepository.h"

using namespace std;

class Login {

private:
	MemberRepository* memberRepository;

public:
	Login(MemberRepository* memberRepository);
	
	bool login(string id, string password);
};

#endif
