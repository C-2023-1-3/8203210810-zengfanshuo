#include<iostream>
using namespace std;

int peachNum(int day);

int main()
{
	cout << "���ӵ�һ��ժ�� " << peachNum(1) << " ������" << endl;
	return 0;
}

int peachNum(int day)
{
	if(day == 10) return 1;
	else return (peachNum(day + 1) + 1) * 2;
}
