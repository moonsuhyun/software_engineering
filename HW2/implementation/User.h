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

class User {
private:
    string id;
    string password;
    string phone;
    BicycleCollection rent_list;
    static User *current_user;
    static vector<User> user_list;
public:
    User(string& id, string& password, string& phone)
        : id(id), password(password), phone(phone), rent_list(BicycleCollection()) {}
    string& getId();
    void addRentList(Bicycle& bicycle);
    vector<Bicycle> getRentList();
    static User& getCurrentUser();
    static void setCurrentUserById(string& id);
    static string resetCurrentUser();
    static void addUser(User& user);
    static void registerAdmin();
};


#endif //USER_H
