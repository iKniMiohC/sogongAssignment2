#ifndef REGISTERBIKEUI_H
#define REGISTERBIKEUI_H

#include "RegisterBike.h"

class RegisterBikeUI {

private:
	RegisterBike* control;

public:
	RegisterBikeUI(RegisterBike* control);

	void registerBike(string bikeId, string bikeName, ofstream& out);
};

#endif
