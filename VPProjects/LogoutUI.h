#ifndef LOGOUTUI_H
#define LOGOUTUI_H

#include "Logout.h"

class LogoutUI {

private:
	Logout* control;

public:

	LogoutUI(Logout* control);
	void logout(ofstream& out);
};

#endif
