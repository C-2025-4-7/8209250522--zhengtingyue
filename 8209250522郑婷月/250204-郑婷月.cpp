#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "请输入表达式: ";
    cin >> num1 >> op >> num2;

    switch (op) {
    case '+':
        cout << "结果: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "结果: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "结果: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << "结果: " << num1 / num2 << endl;
        }
        else {
            cout << "错误: 除数不能为0!" << endl;
        }
        break;
    case '%':
        if ((num2) != 0) {
            cout << "结果: " << (num1) % (num2) << endl;
        }
        else {
            cout << "错误: 除数不能为0" << endl;
        }
        break;
    default:
        cout << "错误: 非法的运算符" << endl;
    }

    return 0;
}