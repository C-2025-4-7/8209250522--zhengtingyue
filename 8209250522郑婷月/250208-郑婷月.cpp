#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    cout << "请输入一个正数 a: ";
    cin >> a;

    if (a < 0) {
        cout << "错误：请输入正数！" << endl;
        return 1;
    }

    double x0 = a;
    double x1 = (x0 + a / x0) / 2;

    while (fabs(x1 - x0) >= 1e-5) {
        x0 = x1;
        x1 = (x0 + a / x0) / 2;
    }

    cout << a << " 的平方根是: " << x1 << endl;
    cout << "验证: " << x1 << " × " << x1 << " = " << x1 * x1 << endl;

    return 0;
}