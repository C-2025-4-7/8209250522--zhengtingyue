#include <iostream>
using namespace std;
int main() {
    double a[10];
    cout << "输入10个小数: ";
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 9; i++) { 
        for (int j = 0; j < 9 - i; j++) {
            if (a[j] > a[j + 1]) {
                double temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "排序后: ";
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    return 0;
}