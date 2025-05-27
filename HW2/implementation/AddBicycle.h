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
#include "AddBicycleUI.h"

using namespace std;

// 3.1. ������ ��� use case�� control Ŭ���� ����
class AddBicycle : public Control {
public:
    AddBicycle(ifstream& input_file, ofstream& output_file); // Control Ŭ���� ��ü�� �����ϰ� Boundary ��ü�� ȣ����
    void processAddBicycle(string& id, string& name);   // ������ ��� ��û�� ó���ϰ� ��� ������ boundary Ŭ������ ����
};

#endif //ADDBICYCLE_H
