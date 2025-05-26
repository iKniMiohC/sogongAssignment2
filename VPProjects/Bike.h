#ifndef BIKE_H
#define BIKE_H

#include <string>

using namespace std;


class Bike {

private:
	string bikeId;
	string bikeName;
	string rentMember;

public:
	
	Bike(string bikeId, string bikeName);
	string getBikeId();
	string getBikeName();
	string getRentMember();
	void setRentMember(string memberId);
};

#endif
