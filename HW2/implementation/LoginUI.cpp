#include "LoginUI.h"

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
