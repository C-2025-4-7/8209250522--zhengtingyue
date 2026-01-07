#include <iostream>
#include "student.h"

using namespace std;

int main() {
    Student stud;
    stud.set_value(123, "张三", 'm');

    Student stud1(007, "tcg", 'm');

    cout << "学生1信息：" << endl;
    stud.display();

    cout << "\n学生2信息：" << endl;
    stud1.display();

    return 0;
}