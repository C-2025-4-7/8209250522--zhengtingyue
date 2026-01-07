#include<iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;
public:
    Point() : x(60), y(80) {}

    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }

    void display() {
        cout << "当前坐标：(" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    Point p;
    cout << "初始化坐标：";
    p.display();

    p.setPoint(10, 20);
    cout << "修改后坐标：";
    p.display();

    return 0;
}
