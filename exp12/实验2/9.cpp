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
	cout << "�ܼ�����" << days << "��" << endl;
	cout << "�ܼ�����" << apples << "��ƻ��" << endl;
	double average = apples * 0.8 / 5;
	cout << "ƽ��ÿ�컨" << average << "Ԫ" << endl;
	system("pause");
	return 0;
}

