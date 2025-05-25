//
// Created by ������ on 25. 5. 20.
//

#ifndef USER_H
#define USER_H

#include <vector>
#include <string>
#include "Bicycle.h"
#include "BicycleCollection.h"

using namespace std;

// ����� ���� ������ ���� User Ŭ���� ����
class User {
private:
    string id;                      // ���̵�
    string password;                // �н�����
    string phone;                   // ��ȭ��ȣ
    BicycleCollection rent_list;    // ����ڰ� �뿩���� ������ ����Ʈ
    static User* current_user;      // ���� ����ڸ� ��Ÿ���� ������
    static vector<User> user_list;  // ȸ������ �� ����ڵ��� ��ü �ν��Ͻ��� ����
public:
    User(string& id, string& password, string& phone)
        : id(id), password(password), phone(phone), rent_list(BicycleCollection()) {
    }
    string& getId();                            // �ش� ������� ���̵� ��ȯ
    void addRentList(Bicycle& bicycle);         // �ش� ������� �뿩 ��Ͽ� ���ο� �����Ÿ� �߰�
    vector<Bicycle> getRentList();              // �ش� ����ڰ� �뿩 ���� �����ŵ��� ��ȯ
    static User& getCurrentUser();              // ���� ���� ���� ������� ��ü �ν��Ͻ��� ��ȯ
    static void setCurrentUserById(string& id); // ���̵� ���� ���� ����� �����͸� ����
    static string resetCurrentUser();           // ���� ����ڸ� ��Ÿ���� �����͸� �ʱ�ȭ
    static void addUser(User& user);            // ���ο� ����� ��ü �ν��Ͻ��� user_list�� �߰�
    static void registerAdmin();                // ���� ���� �� �������� ������ user_list�� �߰�
};


#endif //USER_H
