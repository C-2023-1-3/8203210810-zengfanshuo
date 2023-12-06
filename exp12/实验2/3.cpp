#include <iostream>
using namespace std;
int main() {
    double side1, side2, side3;
    cout << "请输入三角形的三条边长度，用空格分割：" << endl;
    cin >> side1 >> side2 >> side3;

    // 判断三边是否能够构成三角形
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) 
	{
        double perimeter = side1 + side2 + side3;
        cout << "三角形的周长为：" << perimeter << endl;

        // 判断是否为等腰三角形
        if (side1 == side2 || side1 == side3 || side2 == side3) 
		{
            cout << "这是一个等腰三角形。" << endl;
        } 
		else 
		{
            cout << "这不是一个等腰三角形。" << endl;
        }
    } 
	else 
	{
        cout << "输入的边长无法构成三角形。" << endl;
    }
    system("pause"); 
    return 0;
}

