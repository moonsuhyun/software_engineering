//
// Created by 문수현 on 25. 5. 20.
//

#include "AddBicycle.h"

/*
* 생성자: AddBicycle::AddBicycle
* 기능: Control 클래스 객체를 생성하고 Boundary 객체를 호출함
* 전달인자:
*     ifstream& input_file: 사용자 입력 파일 스트림
*     ofstream& output_file: 시스템 출력 파일 스트림
*/
AddBicycle::AddBicycle(ifstream& input_file, ofstream& output_file) : Control(input_file, output_file) {
    this->boundary = new AddBicycleUI(*this, input_file, output_file);
    this->boundary->readInput();
}

/*
* 함수이름: AddBicycle::processAddBicycle
* 기능: 자전거 등록 요청을 처리하고 출력 내용을 boundary 클래스에 전달
* 전달인자:
*     string& id: 새로 등록할 자전거의 아이디 문자열의 참조
*     string& name: 새로 등록할 자전거의 이름 문자열의 참조
* 반환값: 없음
*/
void AddBicycle::processAddBicycle(string& id, string& name) {
    Bicycle new_bicycle = Bicycle(id, name);
    Bicycle::addBicycle(new_bicycle);
    this->boundary->writeOutput("3.1. 자전거 등록\n> " + id + " " + name + "\n");
}

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
