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
        cout << "���꣺ (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point myPoint;

    cout << "��ʼ�㣺";
    myPoint.display();
    double dx, dy;
    cout << "����λ�ƣ�" << endl;
    cin >> dx >> dy;
    myPoint.setPoint(dx, dy);

    cout << "�޸�֮������꣺";
    myPoint.display();

    return 0;
}

