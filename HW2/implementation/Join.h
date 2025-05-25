//
// Created by ������ on 25. 5. 20.
//

#ifndef JOIN_H
#define JOIN_H

#include <string>
#include <fstream>

#include "Boundary.h"
#include "Control.h"
#include "User.h"

using namespace std;

// 1.1. ȸ������ use case�� control Ŭ���� ����
class Join : public Control {
public:
    Join(ifstream& input_file, ofstream& output_file);              // Control Ŭ���� ��ü�� �����ϰ� Boundary ��ü�� ȣ��
    void processJoin(string& id, string& password, string& phone);  // ȸ������ ��û�� ó���ϰ� ��� ������ boundary Ŭ������ ����
};

// 1.1. ȸ������ use case�� boundary Ŭ���� ����
class JoinUI : public Boundary {
public:
    JoinUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {
    }
    void readInput() override;      // �Է� ���� ��Ʈ�����κ��� ������� �Է��� ������
    void requestJoin(string& id, string& password, string& phone);  // Control Ŭ������ ȸ������ ó���� ��û��
};



#endif //JOIN_H
