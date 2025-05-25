//
// Created by 문수현 on 25. 5. 24.
//

#include "Logout.h"

/*
* 생성자: Logout::Logout
* 기능: Control 클래스 객체를 생성하고 로그아웃 처리 후 boundary 클래스에 출력 값 전달
* 전달인자:
*     ifstream& input_file: 사용자 입력 파일 스트림
*     ofstream& output_file: 시스템 출력 파일 스트림
*/
Logout::Logout(ifstream& input_file, ofstream& output_file) : Control(input_file, output_file) {
    this->boundary = new LogoutUI(*this, input_file, output_file);
    this->boundary->writeOutput("2.2. 로그아웃\n> " + User::resetCurrentUser() + "\n");
}
