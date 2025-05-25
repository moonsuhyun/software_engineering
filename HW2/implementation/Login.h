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

using namespace std;

// 2.1. 로그인 use case의 control 클래스 정의
class Login : public Control {
public:
    Login(ifstream& input_file, ofstream& output_file);     // control 클래스 객체를 생성하고 boundary 클래스 호출
    void processLogin(string& id, string& password);        // 로그인 요청을 처리하고 출력 내용을 boundary 클래스에 전달
};

// 2.1. 로그인 use case의 boundary 클래스 정의
class LoginUI : public Boundary {
public:
    LoginUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {
    }
    void readInput() override;                              // 입력 파일 스트림으로부터 사용자 입력을 가져옴
    void requestLogin(string& id, string& password);        // Control 클래스에 로그인 처리를 요청함
};


#endif //LOGIN_H
