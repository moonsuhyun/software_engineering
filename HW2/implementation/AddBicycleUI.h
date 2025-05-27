#ifndef ADDBICYCLEUI_H
#define ADDBICYCLEUI_H

#include "AddBicycle.h"

// 3.1. ������ ��� use case�� boundary Ŭ���� ����
class AddBicycleUI : public Boundary {
public:
    AddBicycleUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {
    }
    void readInput() override;                          // �Է� ���� ��Ʈ�����κ��� ����� �Է��� ������
    void requestAddBicycle(string& id, string& name);   // Control Ŭ������ ������ ��� ó���� ��û��
};

#endif // ADDBICYCLEUI_H

