//
// Created by 문수현 on 25. 5. 20.
//

#ifndef LOGIN_H
#define LOGIN_H

#include <string>
#include <fstream>

#include "Boundary.h"
#include "Control.h"
#include "User.h"

using namespace std;

class Login : public Control {
public:
    Login(ifstream& input_file, ofstream& output_file);
    void processLogin(string &id, string &password);
};

class LoginUI : public Boundary {
public:
    LoginUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {}
    void readInput() override;
    void requestLogin(string &id, string &password);
};


#endif //LOGIN_H
