//
// Created by 문수현 on 25. 5. 20.
//

#ifndef USER_H
#define USER_H

#include <vector>
#include <string>
#include "Bicycle.h"
#include "BicycleCollection.h"

using namespace std;

// 사용자 정보 저장을 위한 User 클래스 정의
class User {
private:
    string id;                      // 아이디
    string password;                // 패스워드
    string phone;                   // 전화번호
    BicycleCollection rent_list;    // 사용자가 대여중인 자전거 리스트
    static User* current_user;      // 현재 사용자를 나타내는 포인터
    static vector<User> user_list;  // 회원가입 된 사용자들의 객체 인스턴스를 저장
public:
    User(string& id, string& password, string& phone)
        : id(id), password(password), phone(phone), rent_list(BicycleCollection()) {
    }
    string& getId();                            // 해당 사용자의 아이디를 반환
    void addRentList(Bicycle& bicycle);         // 해당 사용자의 대여 목록에 새로운 자전거를 추가
    vector<Bicycle> getRentList();              // 해당 사용자가 대여 중인 자전거들을 반환
    static User& getCurrentUser();              // 현재 접속 중인 사용자의 객체 인스턴스를 반환
    static void setCurrentUserById(string& id); // 아이디를 통해 현재 사용자 포인터를 설정
    static string resetCurrentUser();           // 현재 사용자를 나타내는 포인터를 초기화
    static void addUser(User& user);            // 새로운 사용자 객체 인스턴스를 user_list에 추가
    static void registerAdmin();                // 최초 시작 시 관리자의 정보를 user_list에 추가
};


#endif //USER_H
