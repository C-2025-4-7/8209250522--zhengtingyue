#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;
Student::Student() {
    num = 0;
    name[0] = '\0';
    sex = ' ';
}
Student::Student(int n, const char* nm, char s) {
    set_value(n, nm, s);
}

void Student::set_value(int n, const char* nm, char s) {
    num = n;
    strncpy(name, nm, 19);
    name[19] = '\0';
    sex = s;
}

void Student::display() {
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}