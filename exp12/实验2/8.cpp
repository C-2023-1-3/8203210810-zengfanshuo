#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout << "请输入一个数字" << endl;
	double a;
	cin >> a;
	bool flag = true;
	if (a < 0)
	{
		a = -a;
		flag = false;
	}
	double x0 = a;
	double x1 = 0.5 * (x0 + a / x0);
	while (fabs(x1 - x0 ) >= 1e-5)
	{
		x0 = x1;
		x1 = 0.5 * (x0 + a / x0);
	}
	if (flag == true)
	{
		cout << a << "的平方根为" << x1 << endl;
	}
	else
	{
		cout << -a << "的平方根为" << x1 <<"i"<< endl;
	}
	system("pause");
	return 0;
}

