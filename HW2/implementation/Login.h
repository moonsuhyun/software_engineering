//
// Created by 문수현 on 25. 5. 20.
//

#ifndef LOGIN_H
#define LOGIN_H

#include <string>
#include <fstream>

#include "Boundary.h"
#include "Control.h"
#include "User.h"
#include "LoginUI.h"

using namespace std;

// 2.1. 로그인 use case의 control 클래스 정의
class Login : public Control {
public:
    Login(ifstream& input_file, ofstream& output_file);     // control 클래스 객체를 생성하고 boundary 클래스 호출
    void processLogin(string& id, string& password);        // 로그인 요청을 처리하고 출력 내용을 boundary 클래스에 전달
};


#endif //LOGIN_H
