#include <iostream>
using namespace std;

void sortArray(int* arr, int n) {
    if (arr == nullptr || n <= 1) return;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "请输入数组长度：";
    cin >> n;
    if (n <= 0) {
        cout << "长度非法！" << endl;
        return 1;
    }

    int* arr = new int[n];
    cout << "请输入" << n << "个整数（空格分隔）：";
    for (int i = 0; i < n; ++i) {
        cin >> *(arr + i);
    }

    cout << "排序前数组（指针输出）：";
    for (int i = 0; i < n; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    sortArray(arr, n);

    cout << "排序后数组（指针输出）：";
    for (int i = 0; i < n; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    delete[] arr;
    arr = nullptr;
    return 0;
}