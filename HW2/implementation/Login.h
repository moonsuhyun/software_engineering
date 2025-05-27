//
// Created by ������ on 25. 5. 20.
//

#ifndef LOGIN_H
#define LOGIN_H

#include <string>
#include <fstream>

#include "Boundary.h"
#include "Control.h"
#include "User.h"
#include "LoginUI.h"

using namespace std;

// 2.1. �α��� use case�� control Ŭ���� ����
class Login : public Control {
public:
    Login(ifstream& input_file, ofstream& output_file);     // control Ŭ���� ��ü�� �����ϰ� boundary Ŭ���� ȣ��
    void processLogin(string& id, string& password);        // �α��� ��û�� ó���ϰ� ��� ������ boundary Ŭ������ ����
};


#endif //LOGIN_H
