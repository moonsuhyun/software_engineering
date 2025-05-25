//
// Created by 문수현 on 25. 5. 24.
//

#include "Logout.h"

Logout::Logout(ifstream &input_file, ofstream &output_file) : Control(input_file, output_file) {
    this->boundary = new LogoutUI(*this, input_file, output_file);
    this->boundary->writeOutput("2.2. 로그아웃\n> " + User::resetCurrentUser() + "\n");
}
