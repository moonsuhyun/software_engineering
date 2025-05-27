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
#include "JoinUI.h"

using namespace std;

// 1.1. 회원가입 use case의 control 클래스 정의
class Join : public Control {
public:
    Join(ifstream& input_file, ofstream& output_file);              // Control 클래스 객체를 생성하고 Boundary 객체를 호출
    void processJoin(string& id, string& password, string& phone);  // 회원가입 요청을 처리하고 출력 내용을 boundary 클래스에 전달
};



#endif //JOIN_H
