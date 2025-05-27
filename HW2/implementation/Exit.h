//
// Created by 문수현 on 25. 5. 27.
//

#ifndef EXIT_H
#define EXIT_H

#include <fstream>
#include <string>

#include "Control.h"
#include "Boundary.h"

#include "ExitUI.h"

using namespace std;

// 6.1. 종료 use case의 control 클래스 정의
class Exit : public Control {
public:
    Exit(ifstream& input_file, ofstream& output_file, bool& is_exit);  // Control 클래스 객체를 생성하고 종료 처리 후 boundary 클래스에 출력 값 전달
    bool processExit();
};

#endif //EXIT_H
