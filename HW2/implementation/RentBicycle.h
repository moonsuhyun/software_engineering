//
// Created by 문수현 on 25. 5. 20.
//

#ifndef RENTBICYCLE_H
#define RENTBICYCLE_H

#include <string>
#include <fstream>
#include "Boundary.h"
#include "Control.h"
#include "User.h"

using namespace std;

class RentBicycle : public Control {
public:
    RentBicycle(ifstream &input_file, ofstream &output_file);
    void processRentBicycle(string &id);
};

class RentBicycleUI : public Boundary {
public:
    RentBicycleUI(Control& control, ifstream &input_file, ofstream &output_file)
        : Boundary(control, input_file, output_file) {}
    void readInput() override;
    void requestRentBicycle(string &id);
};



#endif //RENTBICYCLE_H
