#include <iostream>
using namespace std;
int main() 
{
    int a, b;
    cout << "请输入两个正整数: ";
    cin >> a >> b;

    int m = a, n = b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int X = a;
    int Y = m * n / X;

    cout << "最大公约数: " << X << endl;
    cout << "最小公倍数: " << Y << endl;

    return 0;
}