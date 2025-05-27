#include "JoinUI.h"

/*
* 함수이름: JoinUI::readInput
* 기능: 입력 파일 스트림으로부터 사용자 입력을 가져옴
* 전달인자: 없음
* 반환값: 없음
*/
void JoinUI::readInput() {
    string id, password, phone;
    input_file >> id >> password >> phone;
    this->requestJoin(id, password, phone);
}

/*
* 함수이름: JoinUI::requestJoin
* 기능: Control 클래스에 회원가입 처리를 요청함
* 전달인자:
*     string& id: 새로 가입한 회원의 아이디 문자열의 참조
*     string& name: 새로 가입한 회원의 이름 문자열의 참조
*     string& phone: 새로 가입한 회원의 전화번호 문자열의 참조
* 반환값: 없음
*/
void JoinUI::requestJoin(string& id, string& password, string& phone) {
    auto& join = dynamic_cast<Join&>(this->control);
    join.processJoin(id, password, phone);
}
