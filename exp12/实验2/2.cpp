#include <iostream>
using namespace std;

int main()
{
	double x;
	cout << "������x��ֵ(���������ַ����˳�����)" << endl;
	while (cin >> x)
	{
		double y;
		if (0 < x && x < 1)  y = 3 - 2 * x; 
		else if (1 <= x && x < 5)  y = 2 / (4 * x) + 1; 
		else if (5 <= x && x < 10)  y = x * x; 
		else { cout << "���ڶ�������" << endl; }
		if(0 < x && x < 10) cout << "y��ֵΪ��" << y << endl;
		cout << "������x��ֵ(���������ַ����˳�����)" << endl;
	}
	system("pause");
	return 0;
}

