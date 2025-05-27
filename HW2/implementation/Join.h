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
#include "JoinUI.h"

using namespace std;

// 1.1. ȸ������ use case�� control Ŭ���� ����
class Join : public Control {
public:
    Join(ifstream& input_file, ofstream& output_file);              // Control Ŭ���� ��ü�� �����ϰ� Boundary ��ü�� ȣ��
    void processJoin(string& id, string& password, string& phone);  // ȸ������ ��û�� ó���ϰ� ��� ������ boundary Ŭ������ ����
};



#endif //JOIN_H
