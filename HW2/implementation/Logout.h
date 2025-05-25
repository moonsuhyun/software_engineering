//
// Created by 문수현 on 25. 5. 24.
//

#ifndef LOGOUT_H
#define LOGOUT_H

#include <fstream>

#include "Control.h"
#include "Boundary.h"
#include "User.h"

using namespace std;

// 2.2. 로그아웃 use case의 control 클래스 정의
class Logout : public Control {
public:
    Logout(ifstream& input_file, ofstream& output_file);    // Control 클래스 객체를 생성하고 로그아웃 처리 후 boundary 클래스에 출력 값 전달
};

// 2.2. 로그아웃 use case의 boundary 클래스 정의
class LogoutUI : public Boundary {
public:
    LogoutUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {}
};

#endif //LOGOUT_H
