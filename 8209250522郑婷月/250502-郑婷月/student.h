#ifndef STUDENT_H
#define STUDENT_H

#include <cstring>

class Student {
public:
    Student();
    Student(int n, const char* nm, char s);

    void display();
    void set_value(int n, const char* nm, char s);

private:
    int num;
    char name[20];
    char sex;
};

#endif
