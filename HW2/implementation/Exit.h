//
// Created by ������ on 25. 5. 27.
//

#ifndef EXIT_H
#define EXIT_H

#include <fstream>
#include <string>

#include "Control.h"
#include "Boundary.h"

#include "ExitUI.h"

using namespace std;

// 6.1. ���� use case�� control Ŭ���� ����
class Exit : public Control {
public:
    Exit(ifstream& input_file, ofstream& output_file, bool& is_exit);  // Control Ŭ���� ��ü�� �����ϰ� ���� ó�� �� boundary Ŭ������ ��� �� ����
    bool processExit();
};

#endif //EXIT_H
