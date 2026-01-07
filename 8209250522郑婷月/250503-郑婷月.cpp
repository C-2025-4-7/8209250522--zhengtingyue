#include <iostream>
using namespace std;

class Cuboid {
private:
    double length;
    double width;
    double height;

public:
    void inputDimensions() {
        cout << "请输入长方柱的长、宽、高：";
        cin >> length >> width >> height;
    }

    double calculateVolume() {
        return length * width * height;
    }

    void displayVolume() {
        cout << "长方柱体积为：" << calculateVolume() << endl;
    }
};

int main() {
    const int NUM_CUBOIDS = 3;
    Cuboid cuboids[NUM_CUBOIDS];

    for (int i = 0; i < NUM_CUBOIDS; i++) {
        cout << "\n第" << i + 1 << "个长方柱：" << endl;
        cuboids[i].inputDimensions();
    }

    cout << "\n三个长方柱的体积如下：" << endl;
    for (int i = 0; i < NUM_CUBOIDS; i++) {
        cout << "第" << i + 1 << "个长方柱：";
        cuboids[i].displayVolume();
    }

    return 0;
}