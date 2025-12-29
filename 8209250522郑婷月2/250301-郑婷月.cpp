#include <iostream>
using namespace std;
int find_gcd(int m, int n) {
	while (n != 0) {
		int temp = n;
		n = m % n;
		m = temp;
	}
	return m;
}
void find_gcd_lcm(int m, int n, int &gcd, int &lcm) {
	int a = m, b = n;
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	gcd = a;
	lcm = m / gcd * n;
}
int main() {
	int m, n;
	cout << "请输入两个自然数：" << endl;
	cin >> m >> n;
	int gcd1 = find_gcd(m, n);
	cout << m << "和" << n << "的最大公约数是:" << gcd1 << endl;
	
	int gcd2, lcm;
	find_gcd_lcm(m, n, gcd2, lcm);
	cout << m << "和" << n << "的最大公约数是：" << gcd2 << endl;
	cout << m << "和" << n << "的最大公倍数是：" << lcm << endl;

	return 0;
}