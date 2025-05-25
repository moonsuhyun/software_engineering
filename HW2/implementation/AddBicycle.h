//
// Created by 문수현 on 25. 5. 20.
//

#ifndef ADDBICYCLE_H
#define ADDBICYCLE_H

#include <fstream>
#include <string>

#include "Control.h"
#include "Boundary.h"
#include "Bicycle.h"

using namespace std;

// 3.1. 자전거 등록 use case의 control 클래스 정의
class AddBicycle : public Control {
public:
    AddBicycle(ifstream& input_file, ofstream& output_file); // Control 클래스 객체를 생성하고 Boundary 객체를 호출함
    void processAddBicycle(string& id, string& name);   // 자전거 등록 요청을 처리하고 출력 내용을 boundary 클래스에 전달
};

// 3.1. 자전거 등록 use case의 boundary 클래스 정의
class AddBicycleUI : public Boundary {
public:
    AddBicycleUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {}
    void readInput() override;                          // 입력 파일 스트림으로부터 사용자 입력을 가져옴
    void requestAddBicycle(string& id, string& name);   // Control 클래스에 자전거 등록 처리를 요청함
};

#endif //ADDBICYCLE_H
