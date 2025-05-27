//
// Created by 문수현 on 25. 5. 20.
//

#ifndef RENTBICYCLE_H
#define RENTBICYCLE_H

#include <string>
#include <fstream>

#include "Boundary.h"
#include "Control.h"
#include "User.h"
#include "RentBicycleUI.h"

using namespace std;

// 4.1. 자전거 대여 use case의 control 클래스 정의
class RentBicycle : public Control {
public:
    RentBicycle(ifstream& input_file, ofstream& output_file); // control 클래스 객체를 생성하고 boundary 클래스 호출
    void processRentBicycle(string& id);    // 자전거 대여 요청을 처리하고 출력 내용을 boundary 클래스에 전달
};


#endif //RENTBICYCLE_H
