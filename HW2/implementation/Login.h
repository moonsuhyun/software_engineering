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

using namespace std;

// 2.1. �α��� use case�� control Ŭ���� ����
class Login : public Control {
public:
    Login(ifstream& input_file, ofstream& output_file);     // control Ŭ���� ��ü�� �����ϰ� boundary Ŭ���� ȣ��
    void processLogin(string& id, string& password);        // �α��� ��û�� ó���ϰ� ��� ������ boundary Ŭ������ ����
};

// 2.1. �α��� use case�� boundary Ŭ���� ����
class LoginUI : public Boundary {
public:
    LoginUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {
    }
    void readInput() override;                              // �Է� ���� ��Ʈ�����κ��� ����� �Է��� ������
    void requestLogin(string& id, string& password);        // Control Ŭ������ �α��� ó���� ��û��
};


#endif //LOGIN_H
