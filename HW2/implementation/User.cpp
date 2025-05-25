//
// Created by 문수현 on 25. 5. 20.
//

#include "User.h"

User* User::current_user = nullptr;
vector<User> User::user_list = vector<User>();

/*
* 함수이름: User::getId
* 기능: 해당 사용자의 아이디를 반환
* 전달인자: 없음
* 반환값: string&: 사용자 객체 인스턴스의 id 속성의 참조
*/
string& User::getId() {
    return this->id;
}

/*
* 함수이름: User::addRentList
* 기능: 해당 사용자의 대여 목록에 새로운 자전거를 추가
* 전달인자: Bicycle& bicycle: 사용자 객체 인스턴스의 rent_list에 추가될 자전거 객체 인스턴스의 참조
* 반환값: 없음
*/
void User::addRentList(Bicycle& bicycle) {
    this->rent_list.add(bicycle);
}

/*
* 함수이름: User::getRentList
* 기능: 해당 사용자가 대여 중인 자전거들을 반환
* 전달인자: 없음
* 반환값: vector<Bicycle>: 사용자 객체 인스턴스의 rent_list에 저장된 Bicycle 객체들의 벡터
*/
vector<Bicycle> User::getRentList() {
    vector<Bicycle> rent_list;
    for (auto& iter : this->rent_list) {
        rent_list.push_back(iter);
    }
    return rent_list;
}

/*
* 함수이름: User::getCurrentUser
* 기능: 현재 접속중인 사용자 객체 인스턴스를 반환
* 전달인자: 없음
* 반환값: User&: 현재 접속중인 사용자 객체 인스턴스의 참조
*/
User& User::getCurrentUser() {
    return *current_user;
}

/*
* 함수이름: User::getRentList
* 기능: 아이디를 통해 현재 사용자의 포인터를 설정
* 전달인자: string& id: 현재 접속중인 사용자로 설정할 아이디 값의 참조
* 반환값: 없음
*/
void User::setCurrentUserById(string& id) {
    for (auto& iter : user_list) {
        if (iter.getId() == id) {
            current_user = &iter;
        }
    }
}

/*
* 함수이름: User::resetCurrentUser
* 기능: 현재 사용자를 나타내는 포인터를 초기화
* 전달인자: 없음
* 반환값: string: 로그아웃 처리 된 사용자의 아이디
*/
string User::resetCurrentUser() {
    string id = current_user->getId();
    current_user = nullptr;
    return id;
}

/*
* 함수이름: User::addUser
* 기능: 새로운 사용자 객체 인스턴스를 user_list에 추가
* 전달인자: User& user: user_list에 새로 추가할 사용자 객체 인스턴스의 참조
* 반환값: 없음
*/
void User::addUser(User& user) {
    user_list.push_back(user);
}

/*
* 함수이름: User::registerAdmin
* 기능: 최초 시작 시 관리자의 정보를 user_list에 추가
* 전달인자: 없음
* 반환값: 없음
*/
void User::registerAdmin() {
    string id = "admin";
    string password = "admin";
    string phone = "0";
    auto user = User(id, password, phone);
    addUser(user);
}
