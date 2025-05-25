//
// Created by 문수현 on 25. 5. 20.
//

#ifndef JOIN_H
#define JOIN_H

#include <string>
#include <fstream>

#include "Boundary.h"
#include "Control.h"
#include "User.h"

using namespace std;

// 1.1. 회원가입 use case의 control 클래스 정의
class Join : public Control {
public:
    Join(ifstream& input_file, ofstream& output_file);              // Control 클래스 객체를 생성하고 Boundary 객체를 호출
    void processJoin(string& id, string& password, string& phone);  // 회원가입 요청을 처리하고 출력 내용을 boundary 클래스에 전달
};

// 1.1. 회원가입 use case의 boundary 클래스 정의
class JoinUI : public Boundary {
public:
    JoinUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {
    }
    void readInput() override;      // 입력 파일 스트림으로부터 사용자의 입력을 가져옴
    void requestJoin(string& id, string& password, string& phone);  // Control 클래스에 회원가입 처리를 요청함
};



#endif //JOIN_H
