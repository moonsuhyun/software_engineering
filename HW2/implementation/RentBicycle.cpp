//
// Created by 문수현 on 25. 5. 20.
//

#include "RentBicycle.h"

/*
* 생성자: RentBicycle::RentBicycle
* 기능: Control 클래스 객체를 생성하고 Boundary 객체를 호출함
* 전달인자:
*     ifstream& input_file: 사용자 입력 파일 스트림
*     ofstream& output_file: 시스템 출력 파일 스트림
*/
RentBicycle::RentBicycle(ifstream& input_file, ofstream& output_file) : Control(input_file, output_file) {
    this->boundary = new RentBicycleUI(*this, input_file, output_file);
    this->boundary->readInput();
}

/*
* 함수이름: RentBicycle::processRentBicycle
* 기능: 자전거 대여 요청을 처리하고 출력 내용을 boundary 클래스에 전달
* 전달인자:
*     string& id: 대여할 자전거의 아이디 문자열의 참조
* 반환값: 없음
*/
void RentBicycle::processRentBicycle(string& id) {
    Bicycle& bicycle = Bicycle::getBicycleById(id);
    string name = bicycle.getName();
    bicycle.rentBicycle();
    User::getCurrentUser().addRentList(bicycle);
    this->boundary->writeOutput("4.1. 자전거 대여\n> " + id + " " + name + "\n");
}
