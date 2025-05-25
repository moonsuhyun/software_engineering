//
// Created by ������ on 25. 5. 24.
//

#ifndef LOGOUT_H
#define LOGOUT_H

#include <fstream>

#include "Control.h"
#include "Boundary.h"
#include "User.h"

using namespace std;

// 2.2. �α׾ƿ� use case�� control Ŭ���� ����
class Logout : public Control {
public:
    Logout(ifstream& input_file, ofstream& output_file);    // Control Ŭ���� ��ü�� �����ϰ� �α׾ƿ� ó�� �� boundary Ŭ������ ��� �� ����
};

// 2.2. �α׾ƿ� use case�� boundary Ŭ���� ����
class LogoutUI : public Boundary {
public:
    LogoutUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {}
};

#endif //LOGOUT_H
