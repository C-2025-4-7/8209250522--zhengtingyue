#include <iostream>
#include <cstring>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 > len2) {
        return -1;
    }
    for (int i = 0; i <= len2 - len1; i++) {
        bool found = true;
        for (int j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return i;
        }
    }
    return -1;
}
int main() {
    const int MAX_LENGTH = 100;
    char s1[MAX_LENGTH];
    char s2[MAX_LENGTH];
    cout << "请输入第一个字符串: ";
    cin.getline(s1, MAX_LENGTH);
    cout << "请输入第二个字符串: ";
    cin.getline(s2, MAX_LENGTH);
    int result = indexOf(s1, s2);
    if (result != -1) {
        cout << s1 << " 是 " << s2 << " 的子串，下标为 " << result << endl;
    }
    else {
        cout << s1 << " 不是 " << s2 << " 的子串" << endl;
    }
    return 0;
}