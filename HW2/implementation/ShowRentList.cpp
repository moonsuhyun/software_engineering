//
// Created by 문수현 on 25. 5. 20.
//

#include "ShowRentList.h"

/*
* 생성자: ShowRentList::ShowRentList
* 기능: Control 클래스 객체를 생성하고 자전거 대여 리스트 조회 처리 후 boundary 클래스에 출력 값 전달
* 전달인자:
*     ifstream& input_file: 사용자 입력 파일 스트림
*     ofstream& output_file: 시스템 출력 파일 스트림
*/
ShowRentList::ShowRentList(ifstream& input_file, ofstream& output_file) : Control(input_file, output_file) {
    this->boundary = new ShowRentListUI(*this, input_file, output_file);
    string output = "5.1. 자전거 대여 리스트\n";
    for (auto& iter : User::getCurrentUser().getRentList()) {
        output += "> " + iter.getId() + " " + iter.getName() + "\n";
    }
    this->boundary->writeOutput(output);
}
