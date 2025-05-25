//
// Created by ������ on 25. 5. 20.
//

#ifndef SHOWRENTLIST_H
#define SHOWRENTLIST_H

#include <fstream>

#include "Boundary.h"
#include "Control.h"
#include "User.h"

using namespace std;

// 5.1. ������ �뿩 ����Ʈ use case�� control Ŭ���� ����
class ShowRentList : public Control {
public:
    ShowRentList(ifstream& input_file, ofstream& output_file); // Control Ŭ���� ��ü�� �����ϰ� ������ �뿩 ����Ʈ ��ȸ ó�� �� boundary Ŭ������ ��� �� ����
};

// 5.1. ������ �뿩 ����Ʈ use case�� boundary Ŭ���� ����
class ShowRentListUI : public Boundary {
public:
    ShowRentListUI(Control& control, ifstream& input_stream, ofstream& output_file)
        : Boundary(control, input_stream, output_file) {
    }
};

#endif //SHOWRENTLIST_H
