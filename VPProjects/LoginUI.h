#ifndef LOGINUI_H
#define LOGINUI_H

#include "Login.h"

class LoginUI {

private:
	Login* control;

public:
	LoginUI(Login* control);

	void login(string id, string password, ofstream& out);
};

#endif
