#include "SignUp.h"
#include "Member.h"
#include <iostream>

using namespace std;

SignUp::SignUp(MemberRepository* memberRepository) : memberRepository(memberRepository) {}

void SignUp::signUp(string id, string password, string phoneNumber) {
	Member* newMember = new Member(id, password, phoneNumber);
    memberRepository->addMember(newMember);
    
	cout << "1.1. 회원가입" << endl;
	cout << "> " << id << " " << password << " " << phoneNumber << endl;
}


