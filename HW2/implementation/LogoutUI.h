#ifndef LOGOUTUI_H
#define LOGOUTUI_H

#include "Logout.h"

// 2.2. 로그아웃 use case의 boundary 클래스 정의
class LogoutUI : public Boundary {
public:
    LogoutUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {
    }
};

#endif // LOGOUTUI_H