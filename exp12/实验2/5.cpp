#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "������һ���ַ�" << endl;
	string str;
    getline(cin, str);
    int len = str.length();
	int letterNumber=0, numbersNumber=0, spaceNumber=0, othersNumber=0;
    for (int i = 0; i < len; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) letterNumber++;
        else if (str[i] >= '0' && str[i] <= '9') numbersNumber++;
        else if (str[i] == ' ')spaceNumber++;
        else othersNumber++;
    }
    cout << "��ĸ����" << letterNumber << endl;
    cout << "��������" << numbersNumber << endl;
    cout << "�ո�����" << spaceNumber << endl;
    cout << "�����ַ�����" << othersNumber << endl;
	return 0;
}

