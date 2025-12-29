#include <iostream>
using namespace std;

int main() {
    int a[10], b[10], k = 0;

    cout << "输入10个数: ";
    for (int i = 0; i < 10; i++) {
        cin >> a[i];

        bool A = false;
        for (int j = 0; j < k; j++) {
            if (b[j] == a[i]) {
                A = true;
                break;
            }
        }

        if (!A) {
            b[k] = a[i];
            k++;
        }
    }

    cout << "不同的数是: ";
    for (int i = 0; i < k; i++) {
        cout << b[i] << " ";
    }
    return 0;
}