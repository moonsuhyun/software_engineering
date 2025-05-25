//
// Created by 문수현 on 25. 5. 23.
//

#ifndef CONTROL_H
#define CONTROL_H

#include <fstream>
#include "Boundary.h"

using namespace std;

// Use case들의 Control 클래스의 일반화 정의
class Control {
protected:
    Boundary* boundary;         // 해당 Control 클래스가 생성하는 Boundary 클래스 인스턴스의 포인터
    ifstream& input_file;       // 사용자 입력 파일 스트림
    ofstream& output_file;      // 시스템 출력 파일 스트림
public:
    Control(ifstream& input_file, ofstream& output_file)
        : input_file(input_file), output_file(output_file) {
    }
    virtual ~Control();         // Control 클래스 인스턴스가 소멸 될 때 Boundary 클래스 인스턴스 메모리 할당 해제
};

#endif //CONTROL_H
