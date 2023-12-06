#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int parseHex(const char *const hexString) {
    int length = strlen(hexString);
    int result = 0;

    for (int i = 0; i < length; ++i) {
        char ch = toupper(hexString[i]);

        if (isdigit(ch)) {
            result = result * 16 + (ch - '0');
        } else if (ch >= 'A' && ch <= 'F') {
            result = result * 16 + (ch - 'A' + 10);
        } else {
            cerr << "无效的十六进制字符: " << ch << endl;
            return -1;
        }
    }
    return result;
}

int main() {
    const int maxSize = 100;
    char hexString[maxSize];

    cout << "输入16进制数: ";
    cin >> hexString;

    int result = parseHex(hexString);
    if (result != -1) {
        cout << "10进制: " << result << endl;
    }
    return 0;
}

