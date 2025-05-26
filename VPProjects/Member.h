#ifndef MEMBER_H
#define MEMBER_H

#include "Bike.h"
#include <string>
#include <vector>

using namespace std;

class Member {

private:
	string id;
	string password;
	string phoneNumber;
	vector<Bike*> rentedBikeList;

public:

	Member(string id, string password, string phoneNumber);
	vector<Bike*> getRentedBikeList();
	string getId();
	string getPassword();
	string getPhoneNumber();
};

#endif
