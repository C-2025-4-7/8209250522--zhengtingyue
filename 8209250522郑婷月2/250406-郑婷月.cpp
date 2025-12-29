#include <iostream>
#include <cctype>
using namespace std;

void count(const char s[], int counts[]) {
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }

    int i = 0;
    while (s[i] != '\0') {
        char ch = s[i];

        if (isalpha(ch)) {
            ch = tolower(ch);
            int index = ch - 'a';
            counts[index]++;
        }
        i++;
    }
}

int main() {
    const int MAX_LENGTH = 100;
    char str[MAX_LENGTH];
    int counts[26];

    cout << "请输入一个字符串: ";
    cin.getline(str, MAX_LENGTH);

    count(str, counts);

    cout << "字母出现次数:" << endl;
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            cout << static_cast<char>('a' + i) << ": " << counts[i] << " 次" << endl;
        }
    }

    return 0;
}