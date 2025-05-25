//
// Created by 문수현 on 25. 5. 20.
//

#ifndef BOUNDARY_H
#define BOUNDARY_H

#include <fstream>
#include <string>

class Control;
using namespace std;

class Boundary {
protected:
    Control& control;
    ifstream& input_file;
    ofstream& output_file;
public:
    Boundary(Control& control, ifstream& input_file, ofstream& output_file)
        : control(control), input_file(input_file), output_file(output_file) {}
    virtual ~Boundary() = default;

    virtual void readInput() {}
    void writeOutput(const string& output);
};

#endif //BOUNDARY_H
