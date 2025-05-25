//
// Created by 문수현 on 25. 5. 20.
//

#ifndef JOIN_H
#define JOIN_H

#include <string>
#include <fstream>
#include "Boundary.h"
#include "Control.h"
#include "User.h"

using namespace std;

class Join : public Control {
public:
    Join(ifstream& input_file, ofstream& output_file);
    void processJoin(string& id, string& password, string& phone);
};

class JoinUI : public Boundary {
public:
    JoinUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {}
    void readInput() override;
    void requestJoin(string& id, string& password, string& phone);
};



#endif //JOIN_H
