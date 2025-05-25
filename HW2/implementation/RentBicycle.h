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

using namespace std;

// 4.1. 자전거 대여 use case의 control 클래스 정의
class RentBicycle : public Control {
public:
    RentBicycle(ifstream& input_file, ofstream& output_file); // control 클래스 객체를 생성하고 boundary 클래스 호출
    void processRentBicycle(string& id);    // 자전거 대여 요청을 처리하고 출력 내용을 boundary 클래스에 전달
};

// 4.1. 자전거 대여 use case의 boundary 클래스 정의
class RentBicycleUI : public Boundary {
public:
    RentBicycleUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {
    }
    void readInput() override;              // 입력 파일 스트림으로부터 사용자 입력을 가져옴
    void requestRentBicycle(string& id);    // Control 클래스에 자전거 대여 처리를 요청함
};



#endif //RENTBICYCLE_H
