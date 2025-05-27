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
#include "RentBicycleUI.h"

using namespace std;

// 4.1. ������ �뿩 use case�� control Ŭ���� ����
class RentBicycle : public Control {
public:
    RentBicycle(ifstream& input_file, ofstream& output_file); // control Ŭ���� ��ü�� �����ϰ� boundary Ŭ���� ȣ��
    void processRentBicycle(string& id);    // ������ �뿩 ��û�� ó���ϰ� ��� ������ boundary Ŭ������ ����
};


#endif //RENTBICYCLE_H
