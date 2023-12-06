#include <iostream>
using namespace std; 
// 函数声明
void calculateGCDandLCM(int m, int n, int &gcd, int &lcm);
int main() {
    // 输入两个自然数 m 和 n
    int m, n;
    cout << "输入两个自然数 m 和 n：" << std::endl;
    cin >> m >> n;
    // 计算最大公约数和最小公倍数
    int gcd, lcm;
    calculateGCDandLCM(m, n, gcd, lcm);
    // 输出结果
    cout << "最大公约数是：" << gcd << std::endl;
    cout << "最小公倍数是：" << lcm << std::endl;
    return 0;
}
// 计算最大公约数和最小公倍数的函数
void calculateGCDandLCM(int m, int n, int &gcd, int &lcm) 
{
    int a = m;
    int b = n;
    // 辗转相除法求最大公约数
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    // 最大公约数
    gcd = a;
    // 最小公倍数 = m * n / 最大公约数
    lcm = (m / gcd) * n;
}

