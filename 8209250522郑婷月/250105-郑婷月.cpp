#include <iostream>
using namespace std;

int main()
{
    double F, C;
    cout << "请输入华氏温度: ";
    cin >> F;
    C = (F - 32) * 5.0 / 9.0;
    cout << "华氏温度 " << F << "°F 转换为摄氏温度为: " << C << "°C" << endl;

    return 0;
}