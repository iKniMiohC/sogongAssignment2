#ifndef SIGNUPUI_H
#define SIGNUPUI_H

#include "SignUp.h"
#include <fstream>

using namespace std;

class SignUpUI {

private:
	SignUp* control;

public:
	SignUpUI(SignUp* control);

	void signUp(string id, string password, string phoneNumber, ofstream& out);
};

#endif
