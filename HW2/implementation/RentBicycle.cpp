//
// Created by 문수현 on 25. 5. 20.
//

#include "RentBicycle.h"


RentBicycle::RentBicycle(ifstream &input_file, ofstream &output_file) : Control(input_file, output_file) {
    this->boundary = new RentBicycleUI(*this, input_file, output_file);
    this->boundary->readInput();
}

void RentBicycle::processRentBicycle(string& id) {
    Bicycle bicycle = Bicycle::getBicycleById(id);
    string name = bicycle.getName();
    bicycle.rentBicycle();
    User::getCurrentUser().addRentList(bicycle);
    this->boundary->writeOutput(format("4.1. 자전거 대여\n> {} {}\n", id, name));
}

void RentBicycleUI::readInput() {
    string id;
    this->input_file >> id;
    this->requestRentBicycle(id);
}

void RentBicycleUI::requestRentBicycle(string& id) {
    auto& rent_bicycle = dynamic_cast<RentBicycle&>(this->control);
    rent_bicycle.processRentBicycle(id);
}
