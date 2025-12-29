#include <iostream>
using namespace std;
int peach_count(int day) {
    if (day == 10) {  
        return 1;
    }
    else {
        return (peach_count(day + 1) + 1) * 2;
    }
}

int main() {
    int total_peaches = peach_count(1);
    cout << "第一天猴子共摘了 " << total_peaches << " 个桃子" << endl;
    cout << "\n验证各天桃子数：" << endl;
    for (int day = 1; day <= 10; day++) {
        int peaches = peach_count(day);
        cout << "第" << day << "天开始时有: " << peaches << " 个桃子" << endl;
    }

    return 0;
}