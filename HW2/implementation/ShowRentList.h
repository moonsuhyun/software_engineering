//
// Created by ������ on 25. 5. 20.
//

#ifndef SHOWRENTLIST_H
#define SHOWRENTLIST_H

#include <fstream>

#include "Boundary.h"
#include "Control.h"
#include "User.h"
#include "ShowRentListUI.h"

using namespace std;

// 5.1. ������ �뿩 ����Ʈ use case�� control Ŭ���� ����
class ShowRentList : public Control {
public:
    ShowRentList(ifstream& input_file, ofstream& output_file); // Control Ŭ���� ��ü�� �����ϰ� ������ �뿩 ����Ʈ ��ȸ ó�� �� boundary Ŭ������ ��� �� ����
};

#endif //SHOWRENTLIST_H
