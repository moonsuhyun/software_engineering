//
// Created by 문수현 on 25. 5. 20.
//

#ifndef BICYCLE_H
#define BICYCLE_H

#include <string>
#include <vector>

using namespace std;

class Bicycle {
private:
    string id;
    string name;
    bool availability;
    static vector<Bicycle> bicycle_list;
public:
    Bicycle(string& id, string& name) : id(id), name(name), availability(true) {};
    string& getId();
    string& getName();
    void rentBicycle();
    static void addBicycle(Bicycle& bicycle);
    static Bicycle& getBicycleById(string& id);
};

#endif //BICYCLE_H
