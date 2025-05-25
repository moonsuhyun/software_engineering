//
// Created by 문수현 on 25. 5. 20.
//

#ifndef ADDBICYCLE_H
#define ADDBICYCLE_H

#include <fstream>
#include <string>

#include "Control.h"
#include "Boundary.h"
#include "Bicycle.h"

using namespace std;

class AddBicycle : public Control {
public:
    AddBicycle(ifstream& input_file, ofstream& output_file);
    void processAddBicycle(string &id, string &name);
};

class AddBicycleUI : public Boundary {
public:
    AddBicycleUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {}
    void readInput() override;
    void requestAddBicycle(string &id, string &name);
};

#endif //ADDBICYCLE_H
