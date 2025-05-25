//
// Created by ������ on 25. 5. 20.
//

#ifndef BICYCLE_H
#define BICYCLE_H

#include <string>
#include <vector>

using namespace std;

// ������ ���� ������ ���� Bicycle Ŭ���� ����
class Bicycle {
private:
    string id;                              // ���̵�
    string name;                            // �̸�
    bool availability;                      // �ߺ� �뿩 ������ ���� �뿩 ���� ����
    static vector<Bicycle> bicycle_list;    // ��ϵ� �����ŵ��� ��ü �ν��Ͻ��� ����
public:
    Bicycle(string& id, string& name) : id(id), name(name), availability(true) {};
    string& getId();                            // �ش� �������� ���̵� ��ȯ
    string& getName();                          // �ش� �������� �̸��� ��ȯ
    void rentBicycle();                         // �ش� �����Ÿ� �뿩 �Ұ������� ����
    static void addBicycle(Bicycle& bicycle);   // ���ο� ������ ��ü �ν��Ͻ��� bicycle_list�� �߰�
    static Bicycle& getBicycleById(string& id); // �־��� ���̵�� ��ġ�ϴ� ������ ��ü �ν��Ͻ��� ��ȯ
};

#endif //BICYCLE_H
