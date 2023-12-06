#include <iostream>
#include <iomanip> // 用于设置输出精度
using namespace std;
int main() {
    // 从键盘输入华氏温度
    double fahrenheit;
    cout << "请输入华氏温度：";
    cin >> fahrenheit;
    // 转换为摄氏温度的公式：C = (F - 32) * 5/9
    double celsius = (fahrenheit - 32) * 5.0 / 9.0;
    // 设置输出精度为两位小数
    cout << fixed << setprecision(2);
    // 输出摄氏温度
    cout << "摄氏温度为：" << celsius << endl;
    system("pause");
    return 0;
}

