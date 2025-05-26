#include "SignUpUI.h"
#include "SignUp.h"
#include <iostream>
#include <fstream>

using namespace std;

SignUpUI::SignUpUI(SignUp* control) : control(control) {}

void SignUpUI::signUp(string id, string password, string phoneNumber, ofstream& out) {
	
	control->signUp(id, password, phoneNumber);

	out << "1.1. 회원가입" << endl;
	out << "> " << id << " " << password << " " << phoneNumber << endl;
	out << endl;
}
