// 헤더 선언
#include <iostream>
#include <string.h>
#include <fstream>

#include "SignUpUI.h"
#include "SignUp.h"
#include "LoginUI.h"
#include "Login.h"
#include "LogoutUI.h"
#include "Logout.h"
#include "RegisterBikeUI.h"
#include "RegisterBike.h"
#include "RentBikeUI.h"
#include "RentBike.h"
#include "RentedBikeInfoUI.h"
#include "RentedBikeInfo.h"


// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void join();
void program_exit();

// 변수 선언
ofstream out_fp;
ifstream in_fp;

using namespace std;

int main()
{
// 파일 입출력을 위한 초기화
in_fp.open(INPUT_FILE_NAME);
out_fp.open(OUTPUT_FILE_NAME);

doTask();

out_fp.close();
in_fp.close();

return 0;
}


void doTask() {
    int menu_level_1 = 0, menu_level_2 = 0;

    while (in_fp >> menu_level_1 >> menu_level_2) {
        switch(menu_level_1) {
            case 1: {
                switch(menu_level_2) {
                    case 1: {  // 1.1 회원가입
                        string id, pw, phone;
                        in_fp >> id >> pw >> phone;

                        static MemberRepository memberRepository; // static 으로 유지
                        SignUp signUpControl(&memberRepository);
                        SignUpUI signUpUI(&signUpControl);

                        signUpUI.signUp(id, pw, phone, out_fp);
                        break;
                    }
                    default:
                        out_fp << "Unknown menu_level_2 in case 1\n";
                }
                break;
            }

            case 2: {
                switch(menu_level_2) {
                    case 1: {  // 2.1 로그인
                        string id, pw;
                        in_fp >> id >> pw;

                        static MemberRepository memberRepository; // static 으로 유지
                        Login loginControl(&memberRepository);
                        LoginUI loginUI(&loginControl);

                        loginUI.login(id, pw, out_fp);
                        break;
                    }
                    case 2: {  // 2.2 로그아웃

                        static MemberRepository memberRepository; // static 으로 유지
                        Logout logoutControl(&memberRepository);
                        LogoutUI loginUI(&logoutControl);

                        loginUI.logout(out_fp);
                        break;
                    }
                    default:
                        out_fp << "Unknown menu_level_2 in case 1\n";
                }
                break;
            }

            case 3: {
                switch(menu_level_2) {
                    case 1: {  // 3.1 자전거 등록

                        string bikeId, bikeName;
                        in_fp >> bikeId >> bikeName;
                        
                        static BikeRepository bikeRepository;
                        RegisterBike registerBikeControl(&bikeRepository);
                        RegisterBikeUI registerBikeUI(&registerBikeControl);

                        registerBikeUI.registerBike(bikeId, bikeName, out_fp);
                        break;
                    }
                    default:
                        out_fp << "Unknown menu_level_2 in case 1\n";
                }
                break;
            }

            case 4: {
                switch(menu_level_2) {
                    case 1: {  // 4.1 자전거 대여

                        string bikeId;
                        in_fp >> bikeId;
                        
                        static MemberRepository memberRepository;
                        static BikeRepository bikeRepository;

                        RentBike rentBikeControl(&memberRepository,&bikeRepository);
                        RentBikeUI rentBikeUI(&rentBikeControl);

                        rentBikeUI.rentBike(bikeId, out_fp);
                        break;
                    }
                    default:
                        out_fp << "Unknown menu_level_2 in case 1\n";
                }
                break;
            }
            case 5: {
                switch(menu_level_2) {
                    case 1: {  // 5.1 자전거 대여 리스트
                        
                        static MemberRepository memberRepository;

                        RentedBikeInfo rentedBikeInfoControl(&memberRepository);
                        RentedBikeInfoUI rentedBikeInfoUI(&rentedBikeInfoControl);

                        rentedBikeInfoUI.rentedBikeInfo(out_fp);
                        break;
                    }
                    default:
                        out_fp << "Unknown menu_level_2 in case 1\n";
                }
                break;
            }

            case 6: {
                // 6.1 종료
                switch(menu_level_2) {
                    case 1: {
                        out_fp << "6.1 프로그램 종료\n";
                        return; // 함수 종료 == 프로그램 종료
                    }
                }
                break;
            }

            default:
                out_fp << "Unknown menu_level_1: " << menu_level_1 << "\n";
        }
    }
}
