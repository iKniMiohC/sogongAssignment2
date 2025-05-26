#ifndef RENTEDBIKEINFOUI_H
#define RENTEDBIKEINFOUI_H

#include "RentedBikeInfo.h"

class RentedBikeInfoUI {

private:
	RentedBikeInfo* control;

public:
	RentedBikeInfoUI(RentedBikeInfo* control);

	void rentedBikeInfo(ofstream& out);
};

#endif
