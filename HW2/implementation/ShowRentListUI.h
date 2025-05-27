#ifndef SHOWRENTLISTUI_H
#define SHOWRENTLISTUI_H

#include "ShowRentList.h"

// 5.1. 자전거 대여 리스트 use case의 boundary 클래스 정의
class ShowRentListUI : public Boundary {
public:
    ShowRentListUI(Control& control, ifstream& input_stream, ofstream& output_file)
        : Boundary(control, input_stream, output_file) {
    }
};


#endif // SHOWRENTLISTUI_H