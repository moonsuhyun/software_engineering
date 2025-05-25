//
// Created by 문수현 on 25. 5. 20.
//

#include "Bicycle.h"

vector<Bicycle> Bicycle::bicycle_list = vector<Bicycle>();

/*
* 함수이름: Bicycle::getId
* 기능: 해당 자전거의 아이디를 반환
* 전달인자: 없음
* 반환값: string&: 자전거 객체 인스턴스의 id 속성의 참조
*/
string& Bicycle::getId() {
    return this->id;
}

/*
* 함수이름: Bicycle::getName
* 기능: 해당 자전거의 이름을 반환
* 전달인자: 없음
* 반환값: string&: 자전거 객체 인스턴스의 name 속성의 참조
*/
string& Bicycle::getName() {
    return this->name;
}

/*
* 함수이름: Bicycle::rentBicycle
* 기능: 해당 자전거를 대여 불가능으로 설정
* 전달인자: 없음
* 반환값: 없음
*/
void Bicycle::rentBicycle() {
    this->availability = false;
}

/*
* 함수이름: Bicycle::addBicycle
* 기능: 새로운 자전거 객체 인스턴스를 bicycle_list에 추가
* 전달인자: Bicycle& bicycle: bicycle_list에 새로 추가될 자전거 객체 인스턴스의 참조
* 반환값: 없음
*/
void Bicycle::addBicycle(Bicycle& bicycle) {
    bicycle_list.push_back(bicycle);
}

/*
* 함수이름: Bicycle::getBicycleById
* 기능: 주어진 아이디와 일치하는 자전거 객체 인스턴스를 반환
* 전달인자: string& id: 검색할 자전거 인스턴스의 아이디의 참조
* 반환값: Bicycle&: 아이디가 일치하는 자전거 객체 인스턴스의 참조
*/
Bicycle& Bicycle::getBicycleById(string& id) {
    for (auto& iter : bicycle_list) {
        if (iter.getId() == id) {
            return iter;
        }
    }
}
