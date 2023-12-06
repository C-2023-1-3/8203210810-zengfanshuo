#include<iostream>
using namespace std;

int peachNum(int day);

int main()
{
	cout << "猴子第一天摘了 " << peachNum(1) << " 个桃子" << endl;
	return 0;
}

int peachNum(int day)
{
	if(day == 10) return 1;
	else return (peachNum(day + 1) + 1) * 2;
}
