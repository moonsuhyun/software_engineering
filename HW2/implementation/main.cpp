#include <fstream>
#include "AddBicycle.h"
#include "Join.h"
#include "Login.h"
#include "Logout.h"
#include "RentBicycle.h"
#include "ShowRentList.h"
#include "User.h"

using namespace std;

#define INPUT_FILE "/Users/moon/Documents/Studies/Undergrad/2025-1/software_engineering/HW2/implementation/input.txt"
#define OUTPUT_FILE "/Users/moon/Documents/Studies/Undergrad/2025-1/software_engineering/HW2/implementation/output.txt"

ifstream input_file;
ofstream output_file;

void doTask();

int main() {
    input_file.open(INPUT_FILE);
    output_file.open(OUTPUT_FILE);

    doTask();

    output_file.close();
    input_file.close();
    return 0;
}

void doTask() {
    User::registerAdmin();
    int menu_level1 = 0;
    int menu_level2 = 0;
    bool is_exit = false;
    Control* control;
    while (!is_exit) {
        input_file >> menu_level1 >> menu_level2;
        switch (menu_level1) {
            case 1:
                switch (menu_level2) {
                    case 1:
                        // 1.1. 회원가입
                        control = new Join(input_file, output_file);
                    delete control;
                    break;
                }
            break;
            case 2:
                switch (menu_level2) {
                    case 1:
                        // 2.1. 로그인
                        control = new Login(input_file, output_file);
                    delete control;
                    break;
                    case 2:
                        // 2.2. 로그아웃
                        control = new Logout(input_file, output_file);
                    delete control;
                    break;
                }
            break;
            case 3:
                switch (menu_level2) {
                    case 1:
                        // 3.1. 자전거 등록
                        control = new AddBicycle(input_file, output_file);
                    delete control;
                    break;
                }
            break;
            case 4:
                switch (menu_level2) {
                    case 1:
                        // 4.1. 자전거 대여
                        control = new RentBicycle(input_file, output_file);
                    delete control;
                    break;
                }
            break;
            case 5:
                switch (menu_level2) {
                    case 1:
                        // 5.1. 자전거 대여 리스트
                        control = new ShowRentList(input_file, output_file);
                    delete control;
                    break;
                }
            break;
            case 6:
                switch (menu_level2) {
                    case 1:
                        // 6.1. 종료
                        is_exit = true;
                        output_file << "6.1. 종료";
                    break;
                }
            break;
        }
    }
}
