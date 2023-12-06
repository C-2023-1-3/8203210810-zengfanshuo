#include <iostream>
using namespace std; 
// ��������
void calculateGCDandLCM(int m, int n, int &gcd, int &lcm);
int main() {
    // ����������Ȼ�� m �� n
    int m, n;
    cout << "����������Ȼ�� m �� n��" << std::endl;
    cin >> m >> n;
    // �������Լ������С������
    int gcd, lcm;
    calculateGCDandLCM(m, n, gcd, lcm);
    // ������
    cout << "���Լ���ǣ�" << gcd << std::endl;
    cout << "��С�������ǣ�" << lcm << std::endl;
    return 0;
}
// �������Լ������С�������ĺ���
void calculateGCDandLCM(int m, int n, int &gcd, int &lcm) 
{
    int a = m;
    int b = n;
    // շת����������Լ��
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    // ���Լ��
    gcd = a;
    // ��С������ = m * n / ���Լ��
    lcm = (m / gcd) * n;
}

