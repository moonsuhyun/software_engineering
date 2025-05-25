//
// Created by 문수현 on 25. 5. 20.
//

#include "Boundary.h"

/*
* 함수이름: Boundary::writeOutput
* 기능: 시스템의 출력을 출력 파일 스트림으로 전달
* 전달인자: const string& output: 시스템이 출력할 문자열의 참조
* 반환값: 없음
*/
void Boundary::writeOutput(const string& output) {
    output_file << output << endl;
}
