#include <iostream>
using namespace std;
const double PI = 3.14159;
int main()
{
	double R, H, V;
	cout << "请输入圆柱底的半径：" << endl;
	cin >> R;
	cout << "请输入圆柱的高：" << endl;
	cin >> H;
	V = PI * R * R * H;
	cout << "圆柱体的体积为：" << V << endl;
	return 0;
}