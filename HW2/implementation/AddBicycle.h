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
#include "AddBicycleUI.h"

using namespace std;

// 3.1. 자전거 등록 use case의 control 클래스 정의
class AddBicycle : public Control {
public:
    AddBicycle(ifstream& input_file, ofstream& output_file); // Control 클래스 객체를 생성하고 Boundary 객체를 호출함
    void processAddBicycle(string& id, string& name);   // 자전거 등록 요청을 처리하고 출력 내용을 boundary 클래스에 전달
};

#endif //ADDBICYCLE_H
