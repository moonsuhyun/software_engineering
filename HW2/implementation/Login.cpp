//
// Created by 문수현 on 25. 5. 20.
//

#include "Login.h"

Login::Login(ifstream &input_file, ofstream &output_file) : Control(input_file, output_file) {
    this->boundary = new LoginUI(*this, input_file, output_file);
    this->boundary->readInput();
}

void Login::processLogin(string& id, string& password) {
    User::setCurrentUserById(id);
    this->boundary->writeOutput(format("2.1. 로그인\n> {} {}\n", id, password));
}

void LoginUI::readInput() {
    string id, password;
    input_file >> id >> password;
    this->requestLogin(id, password);
}

void LoginUI::requestLogin(string& id, string& password) {
    auto &login = dynamic_cast<Login&>(this->control);
    login.processLogin(id, password);
}
