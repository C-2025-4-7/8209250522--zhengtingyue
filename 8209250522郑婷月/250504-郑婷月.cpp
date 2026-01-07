#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Student
{
public:
    int id;
    int score; 
    Student(int i = 0, int s = 0) : id(i), score(s) {}
};

void max(Student* stu_arr, int n)
{
    if (n <= 0) {
        cout << "数组为空！" << endl;
        return;
    }
    int max_score = stu_arr[0].score;
    int max_id = stu_arr[0].id;

    for (int i = 1; i < n; i++) {
        if (stu_arr[i].score > max_score) {
            max_score = stu_arr[i].score;
            max_id = stu_arr[i].id;
        }
    }

    cout << "最高成绩：" << max_score << endl;
    cout << "对应学号：" << max_id << endl;
}

int main()
{
    Student stu_arr[5] = {
        Student(1, 85),
        Student(2, 92),
        Student(3, 78),
        Student(4, 98),
        Student(5, 88)
    };

    max(stu_arr, 5);
    return 0;
}
