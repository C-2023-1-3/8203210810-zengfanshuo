#include<iostream>
#include <cstring>
using namespace std;
const int N = 100;
int indexOf(const char *s1, const char *s2);
int main()
{
 char s1[N], s2[N];
    cout << "Enter the first string: ";
    cin.getline(s1, N);
    cout << "Enter the second string: ";
    cin.getline(s2, N);
 cout << "indexOf(" << s1 << "," << s2 << ") is " << indexOf(s1, s2) << endl;
}

int indexOf(const char *s1, const char *s2)
{
 int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (int i = 0; i <= len2 - len1; i ++) {
        int j;
        for (j = 0; j < len1; ++j) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }
        if (j == len1) {
            return i;
        }
    }
    return -1;
}

