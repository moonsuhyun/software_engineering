//
// Created by ������ on 25. 5. 23.
//

#ifndef BICYCLECOLLECTION_H
#define BICYCLECOLLECTION_H

#include <vector>
#include "Bicycle.h"

using namespace std;

// ������ ����ڰ� �뿩�� �����ŵ��� ����� �����ϴ� Collection Class ����
class BicycleCollection {
private:
    vector<Bicycle> collection;         // ������ ��ü ������Ʈ���� ������ ����
public:
    BicycleCollection() : collection(vector<Bicycle>()) {}
    void add(Bicycle& bicycle);         // ���ο� ������ ��ü �ν��Ͻ��� collection�� �߰�
    vector<Bicycle>::iterator begin();  // iteration�� ���� ù��° �ν��Ͻ��� ����Ű�� �ݺ��� ��ȯ
    vector<Bicycle>::iterator end();    // iteration�� ���� ������ �ν��Ͻ��� ����Ű�� �ݺ��� ��ȯ
};


#endif //BICYCLECOLLECTION_H
