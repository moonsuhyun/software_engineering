#ifndef EXITUI_H
#define EXITUI_H

#include "Exit.h"

// 6.1. ���� use case�� boundary Ŭ���� ����
class ExitUI : public Boundary {
public:
    ExitUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {
    }
};


#endif // EXITUI_H