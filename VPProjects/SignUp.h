#ifndef SIGNUP_H
#define SIGNUP_H

#include <string>
#include "MemberRepository.h"

using namespace std;

class SignUp {

private:
	MemberRepository* memberRepository;

public:
	void signUp(string id, string password, string phoneNumber);

	SignUp(MemberRepository* memberRepository);
};

#endif
