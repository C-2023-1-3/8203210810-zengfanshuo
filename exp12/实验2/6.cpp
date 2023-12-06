#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    return b ? gcd(b,a%b) : a;
}
int main()
{
    int n;
    int a, b;
    cout << "输入两个正整数" << endl;
    cin >> a >> b;
    cout <<"最大公约束为："<< gcd(a, b) << endl;
    cout <<"最小公倍数为："<< a*b/gcd(a, b) << endl;
    system("pause");
    return 0;
}
