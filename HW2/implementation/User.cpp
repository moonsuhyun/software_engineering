//
// Created by 문수현 on 25. 5. 20.
//

#include "User.h"

User* User::current_user = nullptr;
vector<User> User::user_list = vector<User>();

string& User::getId() {
    return this->id;
}

void User::addRentList(Bicycle& bicycle) {
    this->rent_list.add(bicycle);
}

vector<Bicycle> User::getRentList() {
    vector<Bicycle> rent_list;
    for (auto &iter : this->rent_list) {
        rent_list.push_back(iter);
    }
    return rent_list;
}

User& User::getCurrentUser() {
    return *current_user;
}

void User::setCurrentUserById(string& id) {
    for (auto &iter : user_list) {
        if (iter.getId() == id) {
            current_user = &iter;
        }
    }
}

string User::resetCurrentUser() {
    string id = current_user->getId();
    current_user = nullptr;
    return id;
}

void User::addUser(User& user) {
    user_list.push_back(user);
}

void User::registerAdmin() {
    string id = "admin";
    string password = "admin";
    string phone = "0";
    auto user = User(id, password, phone);
    addUser(user);
}
