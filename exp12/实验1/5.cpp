#include <iostream>
#include <iomanip> // ���������������
using namespace std;
int main() {
    // �Ӽ������뻪���¶�
    double fahrenheit;
    cout << "�����뻪���¶ȣ�";
    cin >> fahrenheit;
    // ת��Ϊ�����¶ȵĹ�ʽ��C = (F - 32) * 5/9
    double celsius = (fahrenheit - 32) * 5.0 / 9.0;
    // �����������Ϊ��λС��
    cout << fixed << setprecision(2);
    // ��������¶�
    cout << "�����¶�Ϊ��" << celsius << endl;
    system("pause");
    return 0;
}

