//
// Created by 문수현 on 25. 5. 20.
//

#ifndef BICYCLE_H
#define BICYCLE_H

#include <string>
#include <vector>

using namespace std;

// 자전거 정보 저장을 위한 Bicycle 클래스 정의
class Bicycle {
private:
    string id;                              // 아이디
    string name;                            // 이름
    bool availability;                      // 중복 대여 방지를 위한 대여 가능 여부
    static vector<Bicycle> bicycle_list;    // 등록된 자전거들의 객체 인스턴스를 저장
public:
    Bicycle(string& id, string& name) : id(id), name(name), availability(true) {};
    string& getId();                            // 해당 자전거의 아이디를 반환
    string& getName();                          // 해당 자전거의 이름을 반환
    void rentBicycle();                         // 해당 자전거를 대여 불가능으로 설정
    static void addBicycle(Bicycle& bicycle);   // 새로운 자전거 객체 인스턴스를 bicycle_list에 추가
    static Bicycle& getBicycleById(string& id); // 주어진 아이디와 일치하는 자전거 객체 인스턴스를 반환
};

#endif //BICYCLE_H
