#include <iostream>
using namespace std;
int main() {
    char c;
    int letters = 0, spaces = 0, numbers = 0, others = 0;

    cout << "请输入一行字符: ";
    while ((c = cin.get()) != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letters++;
        }
        else if (c == ' ') {
            spaces++;
        }
        else if (c >= '0' && c <= '9') {
            numbers++;
        }
        else {
            others++;
        }
    }

    cout << "\n结果:" << endl;
    cout << "英文字母: " << letters << " 个" << endl;
    cout << "空格: " << spaces << " 个" << endl;
    cout << "数字字符: " << numbers << " 个" << endl;
    cout << "其它字符: " << others << " 个" << endl;

    return 0;
}