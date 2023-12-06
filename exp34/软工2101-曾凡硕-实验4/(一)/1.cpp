#include<iostream>
using namespace std;
const int N = 15;
int a[N];
void save(int x, int cnt);
int idx = 0;
int main()
{
	for(int i = 0; i < 10; i ++)
	{
		int x;
		cin >> x;
		save(x, i);
	}
	for(int i = 0; i < a[10]; i ++)
	{
		cout << a[i] <<" ";
	}
	return 0;
}
void save(int x, int cnt)
{
	bool flag = true;
	if(cnt > 0)
	{
		for(int i = 0; i <= cnt - 1; i ++)
		{
			if(a[i] == x)
			{
				flag = false;
				break;
			}
		}
		if(flag)
		{
			a[idx ++] = x;
			a[10] ++;
		}
	}
	else
	{
		a[idx ++] = x;
		a[10] ++;
	}
}
