#ifndef RENTBIKEUI_H
#define RENTBIKEUI_H

#include "RentBike.h"

class RentBikeUI {

private:
	RentBike* control;

public:
	RentBikeUI(RentBike* control);

	void rentBike(string bikeId, ofstream& out);
};

#endif
