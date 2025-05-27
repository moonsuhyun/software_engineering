#include "Exit.h"

/*
* 생성자: Exit::Exit
* 기능: Control 클래스 객체를 생성하고 종료 처리 후 boundary 클래스에 출력 값 전달
* 전달인자:
*     ifstream& input_file: 사용자 입력 파일 스트림
*     ofstream& output_file: 시스템 출력 파일 스트림
*     bool& is_exit: 반복문 탈출을 위한 플래그 값
*/
Exit::Exit(ifstream& input_file, ofstream& output_file, bool& is_exit) : Control(input_file, output_file) {
    this->boundary = new ExitUI(*this, input_file, output_file);
    is_exit = true;
    this->boundary->writeOutput("6.1. 종료");
}

