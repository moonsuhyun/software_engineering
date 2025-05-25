//
// Created by 문수현 on 25. 5. 20.
//

#include "Bicycle.h"

vector<Bicycle> Bicycle::bicycle_list = vector<Bicycle>();

string& Bicycle::getId() {
    return this->id;
}

string& Bicycle::getName() {
    return this->name;
}

void Bicycle::rentBicycle() {
    this->availability = false;
}

void Bicycle::addBicycle(Bicycle &bicycle) {
    bicycle_list.push_back(bicycle);
}

Bicycle& Bicycle::getBicycleById(string &id) {
    for (auto &iter : bicycle_list) {
        if (iter.getName() == id) {
            return iter;
        }
    }
}
