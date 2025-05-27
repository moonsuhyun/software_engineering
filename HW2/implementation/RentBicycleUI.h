#ifndef RENTBICYCLEUI_H
#define RENTBICYCLEUI_H

#include "RentBicycle.h"

// 4.1. 자전거 대여 use case의 boundary 클래스 정의
class RentBicycleUI : public Boundary {
public:
    RentBicycleUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {
    }
    void readInput() override;              // 입력 파일 스트림으로부터 사용자 입력을 가져옴
    void requestRentBicycle(string& id);    // Control 클래스에 자전거 대여 처리를 요청함
};

#endif // RENTBICYCLEUI_H