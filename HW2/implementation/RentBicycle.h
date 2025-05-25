//
// Created by ������ on 25. 5. 20.
//

#ifndef RENTBICYCLE_H
#define RENTBICYCLE_H

#include <string>
#include <fstream>

#include "Boundary.h"
#include "Control.h"
#include "User.h"

using namespace std;

// 4.1. ������ �뿩 use case�� control Ŭ���� ����
class RentBicycle : public Control {
public:
    RentBicycle(ifstream& input_file, ofstream& output_file); // control Ŭ���� ��ü�� �����ϰ� boundary Ŭ���� ȣ��
    void processRentBicycle(string& id);    // ������ �뿩 ��û�� ó���ϰ� ��� ������ boundary Ŭ������ ����
};

// 4.1. ������ �뿩 use case�� boundary Ŭ���� ����
class RentBicycleUI : public Boundary {
public:
    RentBicycleUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {
    }
    void readInput() override;              // �Է� ���� ��Ʈ�����κ��� ����� �Է��� ������
    void requestRentBicycle(string& id);    // Control Ŭ������ ������ �뿩 ó���� ��û��
};



#endif //RENTBICYCLE_H
