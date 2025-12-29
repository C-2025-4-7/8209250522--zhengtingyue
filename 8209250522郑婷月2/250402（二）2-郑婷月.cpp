#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int parseHex(const char* const hexString) {
    if (hexString == nullptr) return 0;
    int len = strlen(hexString);
    int result = 0;

    for (int i = 0; i < len; ++i) {
        char c = toupper(hexString[i]);
        int val;
        if (c >= '0' && c <= '9') {
            val = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            val = 10 + (c - 'A');
        }
        else {
            cout << "错误：包含非法16进制字符！" << endl;
            return 0;
        }
        result = result * 16 + val;
    }
    return result;
}

int main() {
    char hexStr[100];
    cout << "请输入16进制字符串（0-9/A-F）：";
    cin >> hexStr;

    int dec = parseHex(hexStr);
    cout << "16进制\"" << hexStr << "\"转10进制结果：" << dec << endl;

    cout << "测试：parseHex(\"A5\") = " << parseHex("A5") << endl;
    return 0;
}