#ifndef MEMBERREPOSITORY_H
#define MEMBERREPOSITORY_H

#include "Member.h"

class MemberRepository {

private:
	vector<Member*> memberList;
	Member* currentMember;

public:
	void addMember(Member* member);

	vector<Member*> getMemberList();

	void setCurrentMember(Member* member);

	Member* getCurrentMember();
};

#endif
