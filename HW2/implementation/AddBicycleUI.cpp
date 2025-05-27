#include "AddBicycleUI.h"

/*
* �Լ��̸�: AddBicycleUI::readInput
* ���: �Է� ���� ��Ʈ�����κ��� ����� �Է��� ������
* ��������: ����
* ��ȯ��: ����
*/
void AddBicycleUI::readInput() {
    string id, name;
    this->input_file >> id >> name;
    this->requestAddBicycle(id, name);
}

/*
* �Լ��̸�: AddBicycleUI::requestAddBicycle
* ���: Control Ŭ������ ������ ��� ó���� ��û��
* ��������:
*     string& id: ���� ����� �������� ���̵� ���ڿ��� ����
*     string& name: ���� ����� �������� �̸� ���ڿ��� ����
* ��ȯ��: ����
*/
void AddBicycleUI::requestAddBicycle(string& id, string& name) {
    auto& add_bicycle = dynamic_cast<AddBicycle&>(this->control);
    add_bicycle.processAddBicycle(id, name);
}