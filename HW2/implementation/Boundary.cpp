//
// Created by ������ on 25. 5. 20.
//

#include "Boundary.h"

/*
* �Լ��̸�: Boundary::writeOutput
* ���: �ý����� ����� ��� ���� ��Ʈ������ ����
* ��������: const string& output: �ý����� ����� ���ڿ��� ����
* ��ȯ��: ����
*/
void Boundary::writeOutput(const string& output) {
    output_file << output << endl;
}
