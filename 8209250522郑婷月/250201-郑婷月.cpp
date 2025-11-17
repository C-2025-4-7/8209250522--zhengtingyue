#include <iostream>
using namespace std;

int main() {
    char A;
    cout << "请输入一个字符: ";
    cin >> A;

    if (A >= 'a' && A <= 'z') {
        A = A - 32;
        cout << "转换为大写: " << A << endl;
    }
    else {
        cout << "后继字符的ASCII码值: " << int(A + 1) << endl;
    }

    return 0;
}