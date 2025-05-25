//
// Created by 문수현 on 25. 5. 23.
//

#ifndef BICYCLECOLLECTION_H
#define BICYCLECOLLECTION_H

#include <vector>
#include "Bicycle.h"

using namespace std;

// 각각의 사용자가 대여한 자전거들의 목록을 저장하는 Collection Class 정의
class BicycleCollection {
private:
    vector<Bicycle> collection;         // 자전거 객체 오브젝트들을 저장한 벡터
public:
    BicycleCollection() : collection(vector<Bicycle>()) {}
    void add(Bicycle& bicycle);         // 새로운 자전거 객체 인스턴스를 collection에 추가
    vector<Bicycle>::iterator begin();  // iteration을 위해 첫번째 인스턴스를 가리키는 반복자 반환
    vector<Bicycle>::iterator end();    // iteration을 위해 마지막 인스턴스를 가리키는 반복자 반환
};


#endif //BICYCLECOLLECTION_H
