//
// Created by 문수현 on 25. 5. 20.
//

#include "AddBicycle.h"

AddBicycle::AddBicycle(ifstream &input_file, ofstream &output_file) : Control(input_file, output_file) {
    this->boundary = new AddBicycleUI(*this, input_file, output_file);
    this->boundary->readInput();
}

void AddBicycle::processAddBicycle(string& id, string& name) {
    Bicycle new_bicycle = Bicycle(id, name);
    Bicycle::addBicycle(new_bicycle);
    this->boundary->writeOutput(format("3.1. 자전거 등록\n> {} {}\n", id, name));
}

void AddBicycleUI::readInput() {
    string id, name;
    this->input_file >> id >> name;
    this->requestAddBicycle(id, name);
}

void AddBicycleUI::requestAddBicycle(string& id, string& name) {
    auto& add_bicycle = dynamic_cast<AddBicycle&>(this->control);
    add_bicycle.processAddBicycle(id, name);
}
