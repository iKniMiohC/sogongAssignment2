#include "Login.h"
#include "Member.h"
#include <iostream>

using namespace std;

Login::Login(MemberRepository* memberRepository) : memberRepository(memberRepository) {}

bool Login::login(string id, string password) {
	
	vector<Member*> memberList = memberRepository->getMemberList();

	if(id == "admin" && password == "admin") {
		return true;
	}

	for(int i = 0; i < memberList.size(); i++) {
		if (memberList[i]->getId() == id && memberList[i]->getPassword() == password){
			memberRepository->setCurrentMember(memberList[i]);
			return true;
		}
		else {
			return false;
		}
	}
}


