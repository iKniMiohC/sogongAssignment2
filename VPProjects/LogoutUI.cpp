#include "LogoutUI.h"
#include "Logout.h"
#include <iostream>

#include <fstream>

using namespace std;

LogoutUI::LogoutUI(Logout* control) : control(control) {}

void LogoutUI::logout(ofstream& out) {
	
	Member* logoutMember = control -> systemEnd();

	out << "2.2. 로그아웃" << endl;
	out << "> " << logoutMember->getId() << endl;
	out << endl;
}
