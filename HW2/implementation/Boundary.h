//
// Created by ������ on 25. 5. 20.
//

#ifndef BOUNDARY_H
#define BOUNDARY_H

#include <fstream>
#include <string>

class Control;
using namespace std;

// Use case���� Boundary Ŭ������ �Ϲ�ȭ ����
class Boundary {
protected:
    Control& control;           // �ش� Boundary Ŭ���� �ν��Ͻ��� ������ Control Ŭ������ ����
    ifstream& input_file;       // ����� �Է� ���� ��Ʈ��
    ofstream& output_file;      // �ý��� ��� ���� ��Ʈ��
public:
    Boundary(Control& control, ifstream& input_file, ofstream& output_file)
        : control(control), input_file(input_file), output_file(output_file) {
    }
    virtual ~Boundary() = default;

    virtual void readInput() {}                 // �Է� ���� ��Ʈ�����κ��� ����� �Է��� ������
    void writeOutput(const string& output);     // �ý����� ����� ��� ���� ��Ʈ������ ����
};

#endif //BOUNDARY_H
