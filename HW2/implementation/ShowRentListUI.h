#ifndef SHOWRENTLISTUI_H
#define SHOWRENTLISTUI_H

#include "ShowRentList.h"

// 5.1. ������ �뿩 ����Ʈ use case�� boundary Ŭ���� ����
class ShowRentListUI : public Boundary {
public:
    ShowRentListUI(Control& control, ifstream& input_stream, ofstream& output_file)
        : Boundary(control, input_stream, output_file) {
    }
};


#endif // SHOWRENTLISTUI_H