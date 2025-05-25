//
// Created by ������ on 25. 5. 20.
//

#include "AddBicycle.h"

/*
* ������: AddBicycle::AddBicycle
* ���: Control Ŭ���� ��ü�� �����ϰ� Boundary ��ü�� ȣ����
* ��������:
*     ifstream& input_file: ����� �Է� ���� ��Ʈ��
*     ofstream& output_file: �ý��� ��� ���� ��Ʈ��
*/
AddBicycle::AddBicycle(ifstream& input_file, ofstream& output_file) : Control(input_file, output_file) {
    this->boundary = new AddBicycleUI(*this, input_file, output_file);
    this->boundary->readInput();
}

/*
* �Լ��̸�: AddBicycle::processAddBicycle
* ���: ������ ��� ��û�� ó���ϰ� ��� ������ boundary Ŭ������ ����
* ��������:
*     string& id: ���� ����� �������� ���̵� ���ڿ��� ����
*     string& name: ���� ����� �������� �̸� ���ڿ��� ����
* ��ȯ��: ����
*/
void AddBicycle::processAddBicycle(string& id, string& name) {
    Bicycle new_bicycle = Bicycle(id, name);
    Bicycle::addBicycle(new_bicycle);
    this->boundary->writeOutput("3.1. ������ ���\n> " + id + " " + name + "\n");
}

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
