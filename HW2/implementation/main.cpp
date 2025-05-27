#include <fstream>


#include "AddBicycle.h"
#include "Exit.h"
#include "Join.h"
#include "Login.h"
#include "Logout.h"
#include "RentBicycle.h"
#include "ShowRentList.h"
#include "User.h"

using namespace std;

// Absolute path ���
#define INPUT_FILE "C:/Mac/Home/Desktop/input.txt"
#define OUTPUT_FILE "C:/Mac/Home/Desktop/output.txt"

void doTask(ifstream& input_file, ofstream& output_file);

int main() {
    ifstream input_file;
    ofstream output_file;
    input_file.open(INPUT_FILE);
    output_file.open(OUTPUT_FILE);

    doTask(input_file, output_file);

    output_file.close();
    input_file.close();
    return 0;
}

void doTask(ifstream& input_file, ofstream& output_file) {
    // �ʱ� ���� �� ������ ���� ���
    User::registerAdmin();
    // �޴� parsing �� ���α׷� ���Ḧ ���� ���� ����
    int menu_level1 = 0;
    int menu_level2 = 0;
    bool is_exit = false;
    ////
    // Control Ŭ������ �Ҵ�, ��ȯ�� ���� ������
    Control* control = nullptr;
    while (!is_exit) {
        input_file >> menu_level1 >> menu_level2;
        switch (menu_level1) {
        case 1:
            switch (menu_level2) {
            case 1:
                // 1.1. ȸ������
                control = new Join(input_file, output_file);
                delete control;
                break;
            }
            break;
        case 2:
            switch (menu_level2) {
            case 1:
                // 2.1. �α���
                control = new Login(input_file, output_file);
                delete control;
                break;
            case 2:
                // 2.2. �α׾ƿ�
                control = new Logout(input_file, output_file);
                delete control;
                break;
            }
            break;
        case 3:
            switch (menu_level2) {
            case 1:
                // 3.1. ������ ���
                control = new AddBicycle(input_file, output_file);
                delete control;
                break;
            }
            break;
        case 4:
            switch (menu_level2) {
            case 1:
                // 4.1. ������ �뿩
                control = new RentBicycle(input_file, output_file);
                delete control;
                break;
            }
            break;
        case 5:
            switch (menu_level2) {
            case 1:
                // 5.1. ������ �뿩 ����Ʈ
                control = new ShowRentList(input_file, output_file);
                delete control;
                break;
            }
            break;
        case 6:
            switch (menu_level2) {
            case 1:
                // 6.1. ����
                control = new Exit(input_file, output_file, is_exit);
                delete control;
                break;
            }
            break;
        }
    }
}
