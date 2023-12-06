#include <iostream>
using namespace std;

int main() {
	int days = 1, apples = 2, day_apples = 2;
	while (apples <= 100) {
		day_apples *= 2;
		apples += day_apples;
		days ++;
	}
	apples -= day_apples;
	days --;
	cout << "总计买了" << days << "天" << endl;
	cout << "总计买了" << apples << "个苹果" << endl;
	double average = apples * 0.8 / 5;
	cout << "平均每天花" << average << "元" << endl;
	system("pause");
	return 0;
}

