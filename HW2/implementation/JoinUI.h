#ifndef JOINUI_H
#define JOINUI_H

#include "Join.h"

// 1.1. 회원가입 use case의 boundary 클래스 정의
class JoinUI : public Boundary {
public:
    JoinUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {
    }
    void readInput() override;      // 입력 파일 스트림으로부터 사용자의 입력을 가져옴
    void requestJoin(string& id, string& password, string& phone);  // Control 클래스에 회원가입 처리를 요청함
};

#endif // JOINUI_H