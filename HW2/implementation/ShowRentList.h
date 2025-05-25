//
// Created by 문수현 on 25. 5. 20.
//

#ifndef SHOWRENTLIST_H
#define SHOWRENTLIST_H

#include <fstream>

#include "Boundary.h"
#include "Control.h"
#include "User.h"

using namespace std;

// 5.1. 자전거 대여 리스트 use case의 control 클래스 정의
class ShowRentList : public Control {
public:
    ShowRentList(ifstream& input_file, ofstream& output_file); // Control 클래스 객체를 생성하고 자전거 대여 리스트 조회 처리 후 boundary 클래스에 출력 값 전달
};

// 5.1. 자전거 대여 리스트 use case의 boundary 클래스 정의
class ShowRentListUI : public Boundary {
public:
    ShowRentListUI(Control& control, ifstream& input_stream, ofstream& output_file)
        : Boundary(control, input_stream, output_file) {
    }
};

#endif //SHOWRENTLIST_H
