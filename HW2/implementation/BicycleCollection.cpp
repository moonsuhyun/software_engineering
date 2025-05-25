//
// Created by 문수현 on 25. 5. 23.
//

#include "BicycleCollection.h"

void BicycleCollection::add(Bicycle &bicycle) {
    this->collection.push_back(bicycle);
}

vector<Bicycle>::iterator BicycleCollection::begin() {
    return this->collection.begin();
}

vector<Bicycle>::iterator BicycleCollection::end() {
    return this->collection.end();
}
