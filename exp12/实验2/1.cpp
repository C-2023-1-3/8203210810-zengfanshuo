#include <iostream>
using namespace std;
int main() {
    char ch;
    // 从键盘输入字符
    cout << "请输入一个字符：";
    cin >> ch;
    // 判断输入字符是否为小写字母
    if (islower(ch)) {
        // 如果是小写字母，则转换为大写输出
        char uppercaseChar = toupper(ch);
        cout << "转换为大写字母：" << uppercaseChar << endl;
    } else {
        // 如果不是小写字母，则输出其后继字符的ASCII码值
        int asciiValue = static_cast<int>(ch) + 1;
        cout << "后继字符的ASCII码值：" << asciiValue << endl;
    }
    system("pause");
    return 0;
}

