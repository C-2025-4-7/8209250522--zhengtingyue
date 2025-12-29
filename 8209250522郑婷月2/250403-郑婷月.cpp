#include <iostream>
using namespace std;

int main() {
    bool L[100] = {0};
    for(int S = 1; S <= 100; S++) {
        for(int N = S - 1; N < 100; N += S) {
            L[N] = !L[N];
        }
    }
    cout << "开着的柜子: ";
    for(int i = 0; i < 100; i++) {
        if(L[i]) {
            cout << i + 1 << " ";
        }
    }
    return 0;
}