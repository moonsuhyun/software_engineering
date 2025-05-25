//
// Created by ������ on 25. 5. 20.
//

#include "Join.h"

using namespace std;

/*
* ������: Join::Join
* ���: Control Ŭ���� ��ü�� �����ϰ� Boundary ��ü�� ȣ����
* ��������:
*     ifstream& input_file: ����� �Է� ���� ��Ʈ��
*     ofstream& output_file: �ý��� ��� ���� ��Ʈ��
*/
Join::Join(ifstream& input_file, ofstream& output_file) : Control(input_file, output_file) {
    this->boundary = new JoinUI(*this, input_file, output_file);
    this->boundary->readInput();
}

/*
* �Լ��̸�: Join::processJoin
* ���: ȸ������ ��û�� ó���ϰ� ��� ������ boundary Ŭ������ ����
* ��������:
*     string& id: ���� ������ ȸ���� ���̵� ���ڿ��� ����
*     string& name: ���� ������ ȸ���� �̸� ���ڿ��� ����
*     string& phone: ���� ������ ȸ���� ��ȭ��ȣ ���ڿ��� ����
* ��ȯ��: ����
*/
void Join::processJoin(string& id, string& password, string& phone) {
    User new_user = User(id, password, phone);
    User::addUser(new_user);
    this->boundary->writeOutput("1.1. ȸ������\n> " + id + " " + password + " " + phone + "\n");
}

/*
* �Լ��̸�: JoinUI::readInput
* ���: �Է� ���� ��Ʈ�����κ��� ����� �Է��� ������
* ��������: ����
* ��ȯ��: ����
*/
void JoinUI::readInput() {
    string id, password, phone;
    input_file >> id >> password >> phone;
    this->requestJoin(id, password, phone);
}

/*
* �Լ��̸�: JoinUI::requestJoin
* ���: Control Ŭ������ ȸ������ ó���� ��û��
* ��������:
*     string& id: ���� ������ ȸ���� ���̵� ���ڿ��� ����
*     string& name: ���� ������ ȸ���� �̸� ���ڿ��� ����
*     string& phone: ���� ������ ȸ���� ��ȭ��ȣ ���ڿ��� ����
* ��ȯ��: ����
*/
void JoinUI::requestJoin(string& id, string& password, string& phone) {
    auto& join = dynamic_cast<Join&>(this->control);
    join.processJoin(id, password, phone);
}
