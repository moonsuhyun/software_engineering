#include "LoginUI.h"

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
