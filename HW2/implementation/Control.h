//
// Created by ������ on 25. 5. 23.
//

#ifndef CONTROL_H
#define CONTROL_H

#include <fstream>
#include "Boundary.h"

using namespace std;

// Use case���� Control Ŭ������ �Ϲ�ȭ ����
class Control {
protected:
    Boundary* boundary;         // �ش� Control Ŭ������ �����ϴ� Boundary Ŭ���� �ν��Ͻ��� ������
    ifstream& input_file;       // ����� �Է� ���� ��Ʈ��
    ofstream& output_file;      // �ý��� ��� ���� ��Ʈ��
public:
    Control(ifstream& input_file, ofstream& output_file)
        : input_file(input_file), output_file(output_file) {
    }
    virtual ~Control();         // Control Ŭ���� �ν��Ͻ��� �Ҹ� �� �� Boundary Ŭ���� �ν��Ͻ� �޸� �Ҵ� ����
};

#endif //CONTROL_H
