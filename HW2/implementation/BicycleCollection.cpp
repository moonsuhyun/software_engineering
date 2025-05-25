//
// Created by ������ on 25. 5. 23.
//

#include "BicycleCollection.h"

/*
* �Լ��̸�: BicycleCollection::add
* ���: ���ο� ������ ��ü �ν��Ͻ��� collection�� �߰�
* ��������: Bicycle& bicycle: collection�� �߰��� ���ο� ������ ��ü �ν��Ͻ��� ����
* ��ȯ��: ����
*/
void BicycleCollection::add(Bicycle& bicycle) {
    this->collection.push_back(bicycle);
}

/*
* �Լ��̸�: BicycleCollection::begin
* ���: iteration�� ���� ù��° �ν��Ͻ��� ����Ű�� �ݺ��� ��ȯ
* ��������: vector<Bicycle>::iterator: ù��° �ν��Ͻ��� ����Ű�� �ݺ���
* ��ȯ��: ����
*/
vector<Bicycle>::iterator BicycleCollection::begin() {
    return this->collection.begin();
}

/*
* �Լ��̸�: BicycleCollection::begin
* ���: iteration�� ���� ������ �ν��Ͻ��� ����Ű�� �ݺ��� ��ȯ
* ��������: vector<Bicycle>::iterator: ������ �ν��Ͻ��� ����Ű�� �ݺ���
* ��ȯ��: ����
*/
vector<Bicycle>::iterator BicycleCollection::end() {
    return this->collection.end();
}
