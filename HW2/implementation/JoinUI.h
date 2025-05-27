#ifndef JOINUI_H
#define JOINUI_H

#include "Join.h"

// 1.1. ȸ������ use case�� boundary Ŭ���� ����
class JoinUI : public Boundary {
public:
    JoinUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {
    }
    void readInput() override;      // �Է� ���� ��Ʈ�����κ��� ������� �Է��� ������
    void requestJoin(string& id, string& password, string& phone);  // Control Ŭ������ ȸ������ ó���� ��û��
};

#endif // JOINUI_H