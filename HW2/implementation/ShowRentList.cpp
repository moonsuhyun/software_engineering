//
// Created by ������ on 25. 5. 20.
//

#include "ShowRentList.h"

/*
* ������: ShowRentList::ShowRentList
* ���: Control Ŭ���� ��ü�� �����ϰ� ������ �뿩 ����Ʈ ��ȸ ó�� �� boundary Ŭ������ ��� �� ����
* ��������:
*     ifstream& input_file: ����� �Է� ���� ��Ʈ��
*     ofstream& output_file: �ý��� ��� ���� ��Ʈ��
*/
ShowRentList::ShowRentList(ifstream& input_file, ofstream& output_file) : Control(input_file, output_file) {
    this->boundary = new ShowRentListUI(*this, input_file, output_file);
    string output = "5.1. ������ �뿩 ����Ʈ\n";
    for (auto& iter : User::getCurrentUser().getRentList()) {
        output += "> " + iter.getId() + " " + iter.getName() + "\n";
    }
    this->boundary->writeOutput(output);
}
