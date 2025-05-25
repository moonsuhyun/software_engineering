//
// Created by 문수현 on 25. 5. 20.
//

#include "Join.h"

using namespace std;

Join::Join(ifstream &input_file, ofstream &output_file) : Control(input_file, output_file) {
    this->boundary = new JoinUI(*this, input_file, output_file);
    this->boundary->readInput();
}

void Join::processJoin(string &id, string &password, string &phone) {
    User new_user = User(id, password, phone);
    User::addUser(new_user);
    this->boundary->writeOutput("1.1. 회원가입\n> " + id + " " + password + " " + phone + "\n");
}

void JoinUI::readInput() {
    string id, password, phone;
    input_file >> id >> password >> phone;
    this->requestJoin(id, password, phone);
}

void JoinUI::requestJoin(string& id, string& password, string& phone) {
    auto& join = dynamic_cast<Join&>(this->control);
    join.processJoin(id, password, phone);
}
