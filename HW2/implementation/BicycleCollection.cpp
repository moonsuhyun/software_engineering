//
// Created by 문수현 on 25. 5. 23.
//

#include "BicycleCollection.h"

/*
* 함수이름: BicycleCollection::add
* 기능: 새로운 자전거 객체 인스턴스를 collection에 추가
* 전달인자: Bicycle& bicycle: collection에 추가할 새로운 자전거 객체 인스턴스의 참조
* 반환값: 없음
*/
void BicycleCollection::add(Bicycle& bicycle) {
    this->collection.push_back(bicycle);
}

/*
* 함수이름: BicycleCollection::begin
* 기능: iteration을 위해 첫번째 인스턴스를 가리키는 반복자 반환
* 전달인자: vector<Bicycle>::iterator: 첫번째 인스턴스를 가리키는 반복자
* 반환값: 없음
*/
vector<Bicycle>::iterator BicycleCollection::begin() {
    return this->collection.begin();
}

/*
* 함수이름: BicycleCollection::begin
* 기능: iteration을 위해 마지막 인스턴스를 가리키는 반복자 반환
* 전달인자: vector<Bicycle>::iterator: 마지막 인스턴스를 가리키는 반복자
* 반환값: 없음
*/
vector<Bicycle>::iterator BicycleCollection::end() {
    return this->collection.end();
}
