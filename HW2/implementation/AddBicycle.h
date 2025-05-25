//
// Created by ������ on 25. 5. 20.
//

#ifndef ADDBICYCLE_H
#define ADDBICYCLE_H

#include <fstream>
#include <string>

#include "Control.h"
#include "Boundary.h"
#include "Bicycle.h"

using namespace std;

// 3.1. ������ ��� use case�� control Ŭ���� ����
class AddBicycle : public Control {
public:
    AddBicycle(ifstream& input_file, ofstream& output_file); // Control Ŭ���� ��ü�� �����ϰ� Boundary ��ü�� ȣ����
    void processAddBicycle(string& id, string& name);   // ������ ��� ��û�� ó���ϰ� ��� ������ boundary Ŭ������ ����
};

// 3.1. ������ ��� use case�� boundary Ŭ���� ����
class AddBicycleUI : public Boundary {
public:
    AddBicycleUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {}
    void readInput() override;                          // �Է� ���� ��Ʈ�����κ��� ����� �Է��� ������
    void requestAddBicycle(string& id, string& name);   // Control Ŭ������ ������ ��� ó���� ��û��
};

#endif //ADDBICYCLE_H
