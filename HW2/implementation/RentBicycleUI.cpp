#include "RentBicycleUI.h"

/*
* 함수이름: RentBicycleUI::readInput
* 기능: 입력 파일 스트림으로부터 사용자 입력을 가져옴
* 전달인자: 없음
* 반환값: 없음
*/
void RentBicycleUI::readInput() {
    string id;
    this->input_file >> id;
    this->requestRentBicycle(id);
}

/*
* 함수이름: RentBicycleUI::requestRentBicycle
* 기능: Control 클래스에 자전거 대여 처리를 요청함
* 전달인자:
*     string& id: 대여할 자전거의 아이디 문자열의 참조
* 반환값: 없음
*/
void RentBicycleUI::requestRentBicycle(string& id) {
    auto& rent_bicycle = dynamic_cast<RentBicycle&>(this->control);
    rent_bicycle.processRentBicycle(id);
}

