//
// Created by 문수현 on 25. 5. 20.
//

#ifndef BOUNDARY_H
#define BOUNDARY_H

#include <fstream>
#include <string>

class Control;
using namespace std;

// Use case들의 Boundary 클래스의 일반화 정의
class Boundary {
protected:
    Control& control;           // 해당 Boundary 클래스 인스턴스를 생성한 Control 클래스의 참조
    ifstream& input_file;       // 사용자 입력 파일 스트림
    ofstream& output_file;      // 시스템 출력 파일 스트림
public:
    Boundary(Control& control, ifstream& input_file, ofstream& output_file)
        : control(control), input_file(input_file), output_file(output_file) {
    }
    virtual ~Boundary() = default;

    virtual void readInput() {}                 // 입력 파일 스트림으로부터 사용자 입력을 가져옴
    void writeOutput(const string& output);     // 시스템의 출력을 출력 파일 스트림으로 전달
};

#endif //BOUNDARY_H
