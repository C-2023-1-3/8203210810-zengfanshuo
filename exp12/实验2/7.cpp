#include <iostream>
using namespace std;

int main(){
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++) cout << "*";
		for (int j = i + 1; j < 5; j++) cout << " ";
		cout << endl;
	}
	system("pause");
	return 0;
}

