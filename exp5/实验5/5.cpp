#include <iostream>
using namespace std;

class Point {
private:
    double x;
    double y;

public:
    Point() : x(60), y(80) {}

    void setPoint(double i, double j) {
        x = 60 + i;
        y = 80 + j;
    }

    void display() {
        cout << "坐标： (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point myPoint;

    cout << "初始点：";
    myPoint.display();
    double dx, dy;
    cout << "输入位移：" << endl;
    cin >> dx >> dy;
    myPoint.setPoint(dx, dy);

    cout << "修改之后的坐标：";
    myPoint.display();

    return 0;
}

