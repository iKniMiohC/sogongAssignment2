#include "Member.h"
#include <string>

using namespace std;

Member::Member(string id, string password, string phoneNumber){
	this->id = id;
	this->password = password;
	this->phoneNumber = phoneNumber;
}

vector<Bike*> Member::getRentedBikeList(){
	return this->rentedBikeList;
}

string Member::getId(){
	return this->id;
}

string Member::getPassword(){
	return this->password;
}

string Member::getPhoneNumber(){
	return this->phoneNumber;
}

