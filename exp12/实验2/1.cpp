#include <iostream>
using namespace std;
int main() {
    char ch;
    // �Ӽ��������ַ�
    cout << "������һ���ַ���";
    cin >> ch;
    // �ж������ַ��Ƿ�ΪСд��ĸ
    if (islower(ch)) {
        // �����Сд��ĸ����ת��Ϊ��д���
        char uppercaseChar = toupper(ch);
        cout << "ת��Ϊ��д��ĸ��" << uppercaseChar << endl;
    } else {
        // �������Сд��ĸ������������ַ���ASCII��ֵ
        int asciiValue = static_cast<int>(ch) + 1;
        cout << "����ַ���ASCII��ֵ��" << asciiValue << endl;
    }
    system("pause");
    return 0;
}

