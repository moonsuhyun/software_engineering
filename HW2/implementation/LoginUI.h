#ifndef LOGINUI_H
#define LOGINUI_H

#include "Login.h"

// 2.1. 로그인 use case의 boundary 클래스 정의
class LoginUI : public Boundary {
public:
    LoginUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {
    }
    void readInput() override;                              // 입력 파일 스트림으로부터 사용자 입력을 가져옴
    void requestLogin(string& id, string& password);        // Control 클래스에 로그인 처리를 요청함
};


#endif // LOGINUI_H

