//
// Created by 문수현 on 25. 5. 20.
//

#include "Login.h"

/*
* 생성자: Login::Login
* 기능: Control 클래스 객체를 생성하고 Boundary 객체를 호출함
* 전달인자:
*     ifstream& input_file: 사용자 입력 파일 스트림
*     ofstream& output_file: 시스템 출력 파일 스트림
*/
Login::Login(ifstream& input_file, ofstream& output_file) : Control(input_file, output_file) {
    this->boundary = new LoginUI(*this, input_file, output_file);
    this->boundary->readInput();
}

/*
* 함수이름: Login::processLogin
* 기능: 로그인 요청을 처리하고 출력 내용을 boundary 클래스에 전달
* 전달인자:
*     string& id: 로그인한 회원의 아이디 문자열의 참조
*     string& password: 로그인한 회원의 비밀번호 문자열의 참조
* 반환값: 없음
*/
void Login::processLogin(string& id, string& password) {
    User::setCurrentUserById(id);
    this->boundary->writeOutput("2.1. 로그인\n> " + id + " " + password + "\n");
}

/*
* 함수이름: LoginUI::readInput
* 기능: 입력 파일 스트림으로부터 사용자 입력을 가져옴
* 전달인자: 없음
* 반환값: 없음
*/
void LoginUI::readInput() {
    string id, password;
    input_file >> id >> password;
    this->requestLogin(id, password);
}

/*
* 함수이름: LoginUI::requestJoin
* 기능: Control 클래스에 로그인 처리를 요청함
* 전달인자:
*     string& id: 로그인한 회원의 아이디 문자열의 참조
*     string& password: 로그인한 회원의 비밀번호 문자열의 참조
* 반환값: 없음
*/
void LoginUI::requestLogin(string& id, string& password) {
    auto& login = dynamic_cast<Login&>(this->control);
    login.processLogin(id, password);
}
