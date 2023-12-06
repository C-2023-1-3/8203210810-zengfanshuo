#include<iostream>
using namespace std;
#define PI 3.14
int main()
{
	double r;
	double h;
	cout << "输入半径和高，用空格分割" << endl;
	cin >> r >> h;
	cout << "圆锥体积为：" << PI*r*r*h/3 << endl; 
	return 0;
}

