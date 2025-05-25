//
// Created by 문수현 on 25. 5. 23.
//

#ifndef CONTROL_H
#define CONTROL_H

#include <fstream>
#include "Boundary.h"

using namespace std;

class Control {
protected:
    Boundary* boundary;
    ifstream& input_file;
    ofstream& output_file;
public:
    Control(ifstream& input_file, ofstream& output_file)
        : input_file(input_file), output_file(output_file) {}
    virtual ~Control();
};

#endif //CONTROL_H
