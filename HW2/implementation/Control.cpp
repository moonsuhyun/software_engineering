//
// Created by 문수현 on 25. 5. 23.
//

#include "Control.h"
//
// Control::Control(ofstream &output_file) : input_file(), output_file(output_file) {
//     this->boundary = new Boundary<T>();
// }
//
// Control:Control(ifstream& input_file, ofstream& output_file) : input_file(input_file), output_file(output_file) {
//     this->boundary = new Boundary<T>(this);
//     this->boundary.readInput();
// }
//
Control::~Control() {
    delete this->boundary;
}
