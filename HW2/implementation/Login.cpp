//
// Created by ������ on 25. 5. 20.
//

#include "Login.h"

/*
* ������: Login::Login
* ���: Control Ŭ���� ��ü�� �����ϰ� Boundary ��ü�� ȣ����
* ��������:
*     ifstream& input_file: ����� �Է� ���� ��Ʈ��
*     ofstream& output_file: �ý��� ��� ���� ��Ʈ��
*/
Login::Login(ifstream& input_file, ofstream& output_file) : Control(input_file, output_file) {
    this->boundary = new LoginUI(*this, input_file, output_file);
    this->boundary->readInput();
}

/*
* �Լ��̸�: Login::processLogin
* ���: �α��� ��û�� ó���ϰ� ��� ������ boundary Ŭ������ ����
* ��������:
*     string& id: �α����� ȸ���� ���̵� ���ڿ��� ����
*     string& password: �α����� ȸ���� ��й�ȣ ���ڿ��� ����
* ��ȯ��: ����
*/
void Login::processLogin(string& id, string& password) {
    User::setCurrentUserById(id);
    this->boundary->writeOutput("2.1. �α���\n> " + id + " " + password + "\n");
}

/*
* �Լ��̸�: LoginUI::readInput
* ���: �Է� ���� ��Ʈ�����κ��� ����� �Է��� ������
* ��������: ����
* ��ȯ��: ����
*/
void LoginUI::readInput() {
    string id, password;
    input_file >> id >> password;
    this->requestLogin(id, password);
}

/*
* �Լ��̸�: LoginUI::requestJoin
* ���: Control Ŭ������ �α��� ó���� ��û��
* ��������:
*     string& id: �α����� ȸ���� ���̵� ���ڿ��� ����
*     string& password: �α����� ȸ���� ��й�ȣ ���ڿ��� ����
* ��ȯ��: ����
*/
void LoginUI::requestLogin(string& id, string& password) {
    auto& login = dynamic_cast<Login&>(this->control);
    login.processLogin(id, password);
}
