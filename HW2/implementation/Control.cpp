//
// Created by ������ on 25. 5. 23.
//

#include "Control.h"

// Control Ŭ���� �ν��Ͻ��� �Ҹ� �� �� Boundary Ŭ���� �ν��Ͻ� �޸� �Ҵ� ����
Control::~Control() {
    delete this->boundary;
}
