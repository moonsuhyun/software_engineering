//
// Created by 문수현 on 25. 5. 24.
//

#ifndef LOGOUT_H
#define LOGOUT_H

#include <fstream>
#include "Control.h"
#include "Boundary.h"
#include "User.h"

using namespace std;


class Logout : public Control {
public:
    Logout(ifstream& input_file, ofstream& output_file);
};

class LogoutUI : public Boundary {
public:
    LogoutUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {}
};

#endif //LOGOUT_H
