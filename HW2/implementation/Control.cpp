//
// Created by 문수현 on 25. 5. 23.
//

#include "Control.h"

// Control 클래스 인스턴스가 소멸 될 때 Boundary 클래스 인스턴스 메모리 할당 해제
Control::~Control() {
    delete this->boundary;
}
