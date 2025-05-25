//
// Created by ������ on 25. 5. 20.
//

#include "RentBicycle.h"

/*
* ������: RentBicycle::RentBicycle
* ���: Control Ŭ���� ��ü�� �����ϰ� Boundary ��ü�� ȣ����
* ��������:
*     ifstream& input_file: ����� �Է� ���� ��Ʈ��
*     ofstream& output_file: �ý��� ��� ���� ��Ʈ��
*/
RentBicycle::RentBicycle(ifstream& input_file, ofstream& output_file) : Control(input_file, output_file) {
    this->boundary = new RentBicycleUI(*this, input_file, output_file);
    this->boundary->readInput();
}

/*
* �Լ��̸�: RentBicycle::processRentBicycle
* ���: ������ �뿩 ��û�� ó���ϰ� ��� ������ boundary Ŭ������ ����
* ��������:
*     string& id: �뿩�� �������� ���̵� ���ڿ��� ����
* ��ȯ��: ����
*/
void RentBicycle::processRentBicycle(string& id) {
    Bicycle& bicycle = Bicycle::getBicycleById(id);
    string name = bicycle.getName();
    bicycle.rentBicycle();
    User::getCurrentUser().addRentList(bicycle);
    this->boundary->writeOutput("4.1. ������ �뿩\n> " + id + " " + name + "\n");
}

/*
* �Լ��̸�: RentBicycleUI::readInput
* ���: �Է� ���� ��Ʈ�����κ��� ����� �Է��� ������
* ��������: ����
* ��ȯ��: ����
*/
void RentBicycleUI::readInput() {
    string id;
    this->input_file >> id;
    this->requestRentBicycle(id);
}

/*
* �Լ��̸�: RentBicycleUI::requestRentBicycle
* ���: Control Ŭ������ ������ �뿩 ó���� ��û��
* ��������:
*     string& id: �뿩�� �������� ���̵� ���ڿ��� ����
* ��ȯ��: ����
*/
void RentBicycleUI::requestRentBicycle(string& id) {
    auto& rent_bicycle = dynamic_cast<RentBicycle&>(this->control);
    rent_bicycle.processRentBicycle(id);
}
