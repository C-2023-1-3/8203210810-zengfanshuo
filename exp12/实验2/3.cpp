#include <iostream>
using namespace std;
int main() {
    double side1, side2, side3;
    cout << "�����������ε������߳��ȣ��ÿո�ָ" << endl;
    cin >> side1 >> side2 >> side3;

    // �ж������Ƿ��ܹ�����������
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) 
	{
        double perimeter = side1 + side2 + side3;
        cout << "�����ε��ܳ�Ϊ��" << perimeter << endl;

        // �ж��Ƿ�Ϊ����������
        if (side1 == side2 || side1 == side3 || side2 == side3) 
		{
            cout << "����һ�����������Ρ�" << endl;
        } 
		else 
		{
            cout << "�ⲻ��һ�����������Ρ�" << endl;
        }
    } 
	else 
	{
        cout << "����ı߳��޷����������Ρ�" << endl;
    }
    system("pause"); 
    return 0;
}

