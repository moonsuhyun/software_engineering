//
// Created by ������ on 25. 5. 20.
//

#include "Bicycle.h"

vector<Bicycle> Bicycle::bicycle_list = vector<Bicycle>();

/*
* �Լ��̸�: Bicycle::getId
* ���: �ش� �������� ���̵� ��ȯ
* ��������: ����
* ��ȯ��: string&: ������ ��ü �ν��Ͻ��� id �Ӽ��� ����
*/
string& Bicycle::getId() {
    return this->id;
}

/*
* �Լ��̸�: Bicycle::getName
* ���: �ش� �������� �̸��� ��ȯ
* ��������: ����
* ��ȯ��: string&: ������ ��ü �ν��Ͻ��� name �Ӽ��� ����
*/
string& Bicycle::getName() {
    return this->name;
}

/*
* �Լ��̸�: Bicycle::rentBicycle
* ���: �ش� �����Ÿ� �뿩 �Ұ������� ����
* ��������: ����
* ��ȯ��: ����
*/
void Bicycle::rentBicycle() {
    this->availability = false;
}

/*
* �Լ��̸�: Bicycle::addBicycle
* ���: ���ο� ������ ��ü �ν��Ͻ��� bicycle_list�� �߰�
* ��������: Bicycle& bicycle: bicycle_list�� ���� �߰��� ������ ��ü �ν��Ͻ��� ����
* ��ȯ��: ����
*/
void Bicycle::addBicycle(Bicycle& bicycle) {
    bicycle_list.push_back(bicycle);
}

/*
* �Լ��̸�: Bicycle::getBicycleById
* ���: �־��� ���̵�� ��ġ�ϴ� ������ ��ü �ν��Ͻ��� ��ȯ
* ��������: string& id: �˻��� ������ �ν��Ͻ��� ���̵��� ����
* ��ȯ��: Bicycle&: ���̵� ��ġ�ϴ� ������ ��ü �ν��Ͻ��� ����
*/
Bicycle& Bicycle::getBicycleById(string& id) {
    for (auto& iter : bicycle_list) {
        if (iter.getId() == id) {
            return iter;
        }
    }
}
