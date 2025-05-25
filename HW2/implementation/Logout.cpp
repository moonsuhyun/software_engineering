//
// Created by ������ on 25. 5. 24.
//

#include "Logout.h"

/*
* ������: Logout::Logout
* ���: Control Ŭ���� ��ü�� �����ϰ� �α׾ƿ� ó�� �� boundary Ŭ������ ��� �� ����
* ��������:
*     ifstream& input_file: ����� �Է� ���� ��Ʈ��
*     ofstream& output_file: �ý��� ��� ���� ��Ʈ��
*/
Logout::Logout(ifstream& input_file, ofstream& output_file) : Control(input_file, output_file) {
    this->boundary = new LogoutUI(*this, input_file, output_file);
    this->boundary->writeOutput("2.2. �α׾ƿ�\n> " + User::resetCurrentUser() + "\n");
}
