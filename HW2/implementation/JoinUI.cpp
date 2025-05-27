#include "JoinUI.h"

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
