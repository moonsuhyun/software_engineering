//
// Created by 문수현 on 25. 5. 20.
//

#include "Join.h"

using namespace std;

/*
* 생성자: Join::Join
* 기능: Control 클래스 객체를 생성하고 Boundary 객체를 호출함
* 전달인자:
*     ifstream& input_file: 사용자 입력 파일 스트림
*     ofstream& output_file: 시스템 출력 파일 스트림
*/
Join::Join(ifstream& input_file, ofstream& output_file) : Control(input_file, output_file) {
    this->boundary = new JoinUI(*this, input_file, output_file);
    this->boundary->readInput();
}

/*
* 함수이름: Join::processJoin
* 기능: 회원가입 요청을 처리하고 출력 내용을 boundary 클래스에 전달
* 전달인자:
*     string& id: 새로 가입한 회원의 아이디 문자열의 참조
*     string& name: 새로 가입한 회원의 이름 문자열의 참조
*     string& phone: 새로 가입한 회원의 전화번호 문자열의 참조
* 반환값: 없음
*/
void Join::processJoin(string& id, string& password, string& phone) {
    User new_user = User(id, password, phone);
    User::addUser(new_user);
    this->boundary->writeOutput("1.1. 회원가입\n> " + id + " " + password + " " + phone + "\n");
}

