//
// Created by 문수현 on 25. 5. 20.
//

#include "ShowRentList.h"

ShowRentList::ShowRentList(ifstream& input_file, ofstream& output_file) : Control(input_file, output_file) {
    this->boundary = new ShowRentListUI(*this, input_file, output_file);
    string output = "5.1. 자전거 대여 리스트\n";
    for (auto &iter : User::getCurrentUser().getRentList()) {
        output += "> " + iter.getId() + " " + iter.getName() + "\n";
    }
    this->boundary->writeOutput(output);
}
