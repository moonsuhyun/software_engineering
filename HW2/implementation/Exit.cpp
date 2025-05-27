#include "Exit.h"

/*
* ������: Exit::Exit
* ���: Control Ŭ���� ��ü�� �����ϰ� ���� ó�� �� boundary Ŭ������ ��� �� ����
* ��������:
*     ifstream& input_file: ����� �Է� ���� ��Ʈ��
*     ofstream& output_file: �ý��� ��� ���� ��Ʈ��
*     bool& is_exit: �ݺ��� Ż���� ���� �÷��� ��
*/
Exit::Exit(ifstream& input_file, ofstream& output_file, bool& is_exit) : Control(input_file, output_file) {
    this->boundary = new ExitUI(*this, input_file, output_file);
    is_exit = true;
    this->boundary->writeOutput("6.1. ����");
}

