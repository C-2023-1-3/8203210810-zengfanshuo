#include<iostream>
#include <iomanip>
using namespace std;

bool is_prime(int num);
int main()
{
	int idx = 2;
	int cnt = 0;
	while(cnt != 200)
	{
		if(is_prime(idx))
		{
			cout << setw(6) << idx;
			cnt ++;
			if(cnt% 10 == 0)
				cout << endl;
		}
		idx ++;
	}
}

bool is_prime(int num)
{
	if(num == 1) return false;
	for(int i = 2; i * i <= num; i ++) {
		if(num % i == 0)
			return false;
	}
	return true;
}



