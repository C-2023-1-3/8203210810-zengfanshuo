#include <iostream>
using namespace std;

int main()
{
	double a, b;
	char op;
	cout << "�����һ������:" << endl;
	cin >> a;
	if (std::cin.fail())
	{
		std::cout << "������Ч��������ֵ\n";
		system("pause");
		return 0;
	}
	cout << "���������:" << endl;
	cin >> op;
    cout << "����ڶ�������:" << endl;
	cin >> b;
	if (std::cin.fail())
	{
		std::cout << "������Ч��������ֵ\n";
		return 0;
	}
	switch (op)
	{
	case '+':
		cout << a << op << b << " = " << a + b << endl;
		break;
	case '-':
		cout << a << op << b << " = " << a - b << endl;
		break;
	case '*':
		cout << a << op << b << " = " << a * b << endl;
		break;
	case '/':
		if (b != 0)
			cout << a << op << b << " = " << a / b << endl;
		else
			cout << "��������Ϊ0" << endl;
		break;
	case '%':
		if (b != 0)
			cout << (int)a << op << (int)b << " = " << (int)a % (int)b << " �Զ�ת��Ϊ����" << endl;
		else
			cout << "��������Ϊ0" << endl;
		break;
	default:
		cout << "�����������+,-,*,/��%" << endl;
	}
	system("pause");
	return 0;
}

