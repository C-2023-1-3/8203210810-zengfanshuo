#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "请输入一串字符" << endl;
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
    cout << "字母数：" << letterNumber << endl;
    cout << "数字数：" << numbersNumber << endl;
    cout << "空格数：" << spaceNumber << endl;
    cout << "其他字符数：" << othersNumber << endl;
	return 0;
}

