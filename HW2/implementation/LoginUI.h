#ifndef LOGINUI_H
#define LOGINUI_H

#include "Login.h"

// 2.1. �α��� use case�� boundary Ŭ���� ����
class LoginUI : public Boundary {
public:
    LoginUI(Control& control, ifstream& input_file, ofstream& output_file)
        : Boundary(control, input_file, output_file) {
    }
    void readInput() override;                              // �Է� ���� ��Ʈ�����κ��� ����� �Է��� ������
    void requestLogin(string& id, string& password);        // Control Ŭ������ �α��� ó���� ��û��
};


#endif // LOGINUI_H

