#include "RentBicycleUI.h"

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

