#ifndef ADDBICYCLEUI_H
#define ADDBICYCLEUI_H

#include "AddBicycle.h"

// 3.1. 자전거 등록 use case의 boundary 클래스 정의
class AddBicycleUI : public Boundary {
public:
    AddBicycleUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {
    }
    void readInput() override;                          // 입력 파일 스트림으로부터 사용자 입력을 가져옴
    void requestAddBicycle(string& id, string& name);   // Control 클래스에 자전거 등록 처리를 요청함
};

#endif // ADDBICYCLEUI_H

