#include "LoginUI.h"
#include "Login.h"
#include "iostream"

#include <fstream>

using namespace std;

LoginUI::LoginUI(Login* control) : control(control) {}

void LoginUI::login(string id, string password, ofstream& out) {

    if(control->login(id, password) == true) {
		out << "2.1. 로그인" << endl;
		out << "> " << id << " " << password << endl;
		out << endl;
	}
	else {
		out << "회원가입을 하신 후 로그인해주세요." << endl;
		out << endl;
	}
}
