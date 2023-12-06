#include <iostream>
using namespace std;

int main()
{
	double a, b;
	char op;
	cout << "输入第一操作数:" << endl;
	cin >> a;
	if (std::cin.fail())
	{
		std::cout << "输入无效，不是数值\n";
		system("pause");
		return 0;
	}
	cout << "输入操作符:" << endl;
	cin >> op;
    cout << "输入第二操作数:" << endl;
	cin >> b;
	if (std::cin.fail())
	{
		std::cout << "输入无效，不是数值\n";
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
			cout << "除数不能为0" << endl;
		break;
	case '%':
		if (b != 0)
			cout << (int)a << op << (int)b << " = " << (int)a % (int)b << " 自动转化为整型" << endl;
		else
			cout << "除数不能为0" << endl;
		break;
	default:
		cout << "运算符请输入+,-,*,/或%" << endl;
	}
	system("pause");
	return 0;
}

