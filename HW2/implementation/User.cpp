//
// Created by ������ on 25. 5. 20.
//

#include "User.h"

User* User::current_user = nullptr;
vector<User> User::user_list = vector<User>();

/*
* �Լ��̸�: User::getId
* ���: �ش� ������� ���̵� ��ȯ
* ��������: ����
* ��ȯ��: string&: ����� ��ü �ν��Ͻ��� id �Ӽ��� ����
*/
string& User::getId() {
    return this->id;
}

/*
* �Լ��̸�: User::addRentList
* ���: �ش� ������� �뿩 ��Ͽ� ���ο� �����Ÿ� �߰�
* ��������: Bicycle& bicycle: ����� ��ü �ν��Ͻ��� rent_list�� �߰��� ������ ��ü �ν��Ͻ��� ����
* ��ȯ��: ����
*/
void User::addRentList(Bicycle& bicycle) {
    this->rent_list.add(bicycle);
}

/*
* �Լ��̸�: User::getRentList
* ���: �ش� ����ڰ� �뿩 ���� �����ŵ��� ��ȯ
* ��������: ����
* ��ȯ��: vector<Bicycle>: ����� ��ü �ν��Ͻ��� rent_list�� ����� Bicycle ��ü���� ����
*/
vector<Bicycle> User::getRentList() {
    vector<Bicycle> rent_list;
    for (auto& iter : this->rent_list) {
        rent_list.push_back(iter);
    }
    return rent_list;
}

/*
* �Լ��̸�: User::getCurrentUser
* ���: ���� �������� ����� ��ü �ν��Ͻ��� ��ȯ
* ��������: ����
* ��ȯ��: User&: ���� �������� ����� ��ü �ν��Ͻ��� ����
*/
User& User::getCurrentUser() {
    return *current_user;
}

/*
* �Լ��̸�: User::getRentList
* ���: ���̵� ���� ���� ������� �����͸� ����
* ��������: string& id: ���� �������� ����ڷ� ������ ���̵� ���� ����
* ��ȯ��: ����
*/
void User::setCurrentUserById(string& id) {
    for (auto& iter : user_list) {
        if (iter.getId() == id) {
            current_user = &iter;
        }
    }
}

/*
* �Լ��̸�: User::resetCurrentUser
* ���: ���� ����ڸ� ��Ÿ���� �����͸� �ʱ�ȭ
* ��������: ����
* ��ȯ��: string: �α׾ƿ� ó�� �� ������� ���̵�
*/
string User::resetCurrentUser() {
    string id = current_user->getId();
    current_user = nullptr;
    return id;
}

/*
* �Լ��̸�: User::addUser
* ���: ���ο� ����� ��ü �ν��Ͻ��� user_list�� �߰�
* ��������: User& user: user_list�� ���� �߰��� ����� ��ü �ν��Ͻ��� ����
* ��ȯ��: ����
*/
void User::addUser(User& user) {
    user_list.push_back(user);
}

/*
* �Լ��̸�: User::registerAdmin
* ���: ���� ���� �� �������� ������ user_list�� �߰�
* ��������: ����
* ��ȯ��: ����
*/
void User::registerAdmin() {
    string id = "admin";
    string password = "admin";
    string phone = "0";
    auto user = User(id, password, phone);
    addUser(user);
}
