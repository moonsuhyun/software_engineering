//
// Created by 문수현 on 25. 5. 23.
//

#ifndef BICYCLECOLLECTION_H
#define BICYCLECOLLECTION_H

#include <vector>
#include "Bicycle.h"

using namespace std;

class BicycleCollection {
private:
    vector<Bicycle> collection;
public:
    BicycleCollection() : collection(vector<Bicycle>()) {}
    void add(Bicycle& bicycle);
    vector<Bicycle>::iterator begin();
    vector<Bicycle>::iterator end();
};


#endif //BICYCLECOLLECTION_H
