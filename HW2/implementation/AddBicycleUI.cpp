#include "AddBicycleUI.h"

/*
* 함수이름: AddBicycleUI::readInput
* 기능: 입력 파일 스트림으로부터 사용자 입력을 가져옴
* 전달인자: 없음
* 반환값: 없음
*/
void AddBicycleUI::readInput() {
    string id, name;
    this->input_file >> id >> name;
    this->requestAddBicycle(id, name);
}

/*
* 함수이름: AddBicycleUI::requestAddBicycle
* 기능: Control 클래스에 자전거 등록 처리를 요청함
* 전달인자:
*     string& id: 새로 등록할 자전거의 아이디 문자열의 참조
*     string& name: 새로 등록할 자전거의 이름 문자열의 참조
* 반환값: 없음
*/
void AddBicycleUI::requestAddBicycle(string& id, string& name) {
    auto& add_bicycle = dynamic_cast<AddBicycle&>(this->control);
    add_bicycle.processAddBicycle(id, name);
}