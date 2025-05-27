#ifndef RENTBICYCLEUI_H
#define RENTBICYCLEUI_H

#include "RentBicycle.h"

// 4.1. ������ �뿩 use case�� boundary Ŭ���� ����
class RentBicycleUI : public Boundary {
public:
    RentBicycleUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {
    }
    void readInput() override;              // �Է� ���� ��Ʈ�����κ��� ����� �Է��� ������
    void requestRentBicycle(string& id);    // Control Ŭ������ ������ �뿩 ó���� ��û��
};

#endif // RENTBICYCLEUI_H