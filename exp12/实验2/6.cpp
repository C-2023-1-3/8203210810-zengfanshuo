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
    cout << "��������������" << endl;
    cin >> a >> b;
    cout <<"���Լ��Ϊ��"<< gcd(a, b) << endl;
    cout <<"��С������Ϊ��"<< a*b/gcd(a, b) << endl;
    system("pause");
    return 0;
}
